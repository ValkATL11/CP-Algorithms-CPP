# CP Tricks

## Overflow prevention
- Promote before multiplication: `1LL * a * b`.
- Use `long long` for prefix sums and distances when constraints require it.
- Avoid `(l + r) / 2` when bounds may overflow; prefer `l + (r - l) / 2` when the difference is representable.
- Use `__int128` only as a GNU extension for wider intermediate arithmetic.

## Avoiding TLE
- Derive the complexity from constraints before selecting a data structure.
- Prefer adjacency lists for sparse graphs.
- Reserve vectors when the final size is predictable.
- Avoid repeated sorting or rebuilding inside loops.

## Common WA causes
- Mixing 0-based and 1-based indexing.
- Using `upper_bound` where `lower_bound` is required.
- Forgetting disconnected components in graph traversal.
- Wrong identity element in segment-tree queries.
- Calling `__builtin_clz(0)` or `__builtin_ctz(0)`.
- Using Dijkstra with negative edges.

## Debugging
Compile locally with `-std=c++17 -O2 -Wall -Wextra`; use assertions and small brute-force differential tests for optimized algorithms.
