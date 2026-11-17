# Disjoint Set Union (DSU)

## Tổng quan
Maintains a partition of vertices into disjoint components.

## Ý tưởng cốt lõi
Find uses path compression; unite uses union by size. Together they keep trees almost flat.

## Khi nào sử dụng
Dynamic connectivity, Kruskal's MST, component counting, and grouping constraints.

## Chi tiết cài đặt
Indices are 0-based. unite(a,b) returns false when both vertices are already in the same component.

## Độ phức tạp
Amortized O(α(N)) per operation; O(N) memory.

## Giới hạn
Does not support deletions of arbitrary edges. Use rollback DSU for offline dynamic connectivity.

## Trường hợp biên
N = 0 is supported for construction, but operations require valid indices. Repeated unions are harmless.

## Chủ đề liên quan
Kruskal, DSU Rollback, Offline Dynamic Connectivity.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/DSU/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
