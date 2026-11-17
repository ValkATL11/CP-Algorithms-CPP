# 0-1 BFS

## Tổng quan
Shortest paths in graphs whose edge weights are restricted to zero or one.

## Ý tưởng cốt lõi
Relax zero-weight edges to the front of a deque and one-weight edges to the back.

## Khi nào sử dụng
Binary-weighted graphs, state transitions with free/paid moves, and minimum-cost transformations.

## Chi tiết cài đặt
Graph is 0-indexed. Every edge weight must be exactly 0 or 1.

## Độ phức tạp
O(N + M) per source; O(N + M) memory.

## Giới hạn
Not valid for arbitrary non-negative weights. Use Dijkstra when weights are not binary.

## Trường hợp biên
Unreachable nodes remain INF. Validate weights if input is not trusted.

## Chủ đề liên quan
Dijkstra, BFS, Dial's Algorithm.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Graph_Theory/Shortest_Path/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
