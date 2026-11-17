# Bridges and Articulation Points

## Tổng quan
Finds critical edges and vertices in an undirected graph.

## Ý tưởng cốt lõi
DFS discovery times and low-link values determine whether a child subtree can reach an ancestor without using its parent edge.

## Khi nào sử dụng
Connectivity resilience, bridge-connected components, and network vulnerability analysis.

## Chi tiết cài đặt
The implementation uses edge IDs, so parallel edges are handled correctly. Vertices are 0-indexed.

## Độ phức tạp
O(N + M) time and O(N + M) memory.

## Giới hạn
Recursive DFS may overflow on very deep graphs. Input must be undirected.

## Trường hợp biên
For a DFS root, articulation requires at least two DFS children. A non-root is an articulation point if a child has low[child] ≥ tin[u].

## Chủ đề liên quan
Tarjan SCC, 2-edge-connected components, DFS low-link.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Graph_Theory/Bridges_Articulation_Points/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
