# Lowest Common Ancestor (Binary Lifting)

## Tổng quan
Answers lowest common ancestor queries on a rooted tree.

## Ý tưởng cốt lõi
Store 2^k-th ancestors. Lift the deeper vertex, then lift both vertices from large powers down.

## Khi nào sử dụng
Tree distance, ancestor queries, path decomposition, and virtual-tree construction.

## Chi tiết cài đặt
Build from a root in a connected tree. Vertices are 0-indexed. depth and up tables are built iteratively to avoid DFS stack overflow.

## Độ phức tạp
O(N log N) preprocessing, O(log N) per query; O(N log N) memory.

## Giới hạn
Assumes a tree (connected, undirected, acyclic). Does not directly handle forests without component checks.

## Trường hợp biên
lca(u,u) = u. For weighted distance, maintain root distances separately.

## Chủ đề liên quan
Euler Tour + RMQ, Heavy-Light Decomposition, Rerooting DP.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Graph_Theory/LCA/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
