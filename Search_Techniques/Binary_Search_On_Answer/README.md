# Binary Search on the Answer

## Overview
Searches the smallest feasible value when feasibility is monotonic.

## Core Idea
Maintain an infeasible lower bound and a feasible upper bound; use a midpoint that cannot overflow.

## When to Use
Minimum capacity, minimum maximum load, and optimization problems with a monotone decision predicate.

## Implementation Details
The helper finds the first x in [lo, hi] for which feasible(x) is true. Preconditions: feasible(hi) is true and feasibility is monotone.

## Complexity
O(log(R-L) × cost(check)) time; O(1) extra memory beyond check().

## Limitations
A non-monotone predicate invalidates binary search. Establish bounds and monotonicity before coding.

## Edge Cases
The implementation uses lo + (hi-lo)/2; ensure hi-lo itself fits in long long.

## Related Problems and Topics
Parametric Search, Parallel Binary Search, Lower Bound.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Search_Techniques/Binary_Search_On_Answer/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
