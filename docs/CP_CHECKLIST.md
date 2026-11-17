# Contest Checklist

## Before coding
- [ ] Parse every constraint: N, M, value bounds, number of test cases.
- [ ] Identify graph direction, weight sign, and connectivity assumptions.
- [ ] Confirm whether intervals are inclusive or half-open.
- [ ] Estimate time and memory complexity against the limits.
- [ ] Check whether values, products, prefix sums, or distances need `long long`.

## During implementation
- [ ] State indexing convention (0-based / 1-based).
- [ ] Initialize identity values correctly (`0`, `INF`, `-INF`, etc.).
- [ ] Avoid `__builtin_clz(0)` / `__builtin_ctz(0)`.
- [ ] Avoid copying large vectors in loops and function calls.
- [ ] Check recursion depth; prefer iterative traversal for deep graphs.
- [ ] Keep fast I/O when input is large: `ios::sync_with_stdio(false); cin.tie(nullptr);`

## Before submission
- [ ] Test minimum sizes and single-element cases.
- [ ] Test duplicates, negative values, disconnected graphs, and parallel edges when relevant.
- [ ] Test maximum constraints or a stress approximation.
- [ ] Compile with warnings: `-Wall -Wextra`.
- [ ] Remove debug output and verify output formatting.
- [ ] Re-check overflow in `a*b`, `mid`, and distance relaxations.
