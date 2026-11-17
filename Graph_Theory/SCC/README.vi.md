# Strongly Connected Components (Kosaraju)

## Tổng quan
Partitions a directed graph into maximal strongly connected components.

## Ý tưởng cốt lõi
Run DFS on the original graph to get finishing order, then DFS on the reversed graph in reverse finishing order.

## Khi nào sử dụng
Condensation DAGs, mutual reachability, and 2-SAT foundations.

## Chi tiết cài đặt
Vertices are 0-indexed. The returned component IDs are arbitrary but equal exactly for vertices in the same SCC.

## Độ phức tạp
O(N + M) time and O(N + M) memory.

## Giới hạn
Recursive DFS can overflow the call stack on a very deep graph. Convert to iterative DFS for strict stack limits.

## Trường hợp biên
Handles disconnected graphs, isolated vertices, and self-loops.

## Chủ đề liên quan
Tarjan SCC, Condensation Graph, 2-SAT.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Graph_Theory/SCC/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
