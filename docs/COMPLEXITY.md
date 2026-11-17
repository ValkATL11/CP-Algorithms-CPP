# Complexity Quick Reference

| Structure / Algorithm | Build or Preprocess | Operation / Query |
|---|---:|---:|
| DSU | O(N) | amortized O(α(N)) |
| Fenwick Tree | O(N log N) by repeated updates | O(log N) |
| Segment Tree | O(N) | O(log N) |
| Lazy Segment Tree | O(N) | O(log N) |
| Sparse Table | O(N log N) | O(1) for idempotent queries |
| Dijkstra (binary heap) | — | O((N+M) log N) |
| 0-1 BFS | — | O(N+M) |
| Kosaraju SCC | — | O(N+M) |
| Bridges / articulation | — | O(N+M) |
| Binary Lifting LCA | O(N log N) | O(log N) |
| KMP | O(M) prefix build | O(N+M) search |
| Z-Function | — | O(N) |
| LIS | — | O(N log N) |
| Two Pointers | — | O(N) on sorted input |
| Binary Search on Answer | — | O(log(range) × check) |

N = number of vertices/elements, M = number of edges, α = inverse Ackermann function.

Complexity depends on representation and operation. Always include the cost of sorting, coordinate compression, and predicate evaluation when applicable.
