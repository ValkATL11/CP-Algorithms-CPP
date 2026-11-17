# Segment Tree (Range Sum)

## Tổng quan
A binary tree over array intervals supporting associative range queries.

## Ý tưởng cốt lõi
Build stores child aggregates in each parent. A query combines only nodes intersecting the requested interval.

## Khi nào sử dụng
Range sum/min/max/gcd queries with point updates.

## Chi tiết cài đặt
The public query(l,r) uses a 0-indexed inclusive interval. The identity for sum is zero.

## Độ phức tạp
O(log N) per point update or range query; O(N) memory.

## Giới hạn
This version handles point assignment and range sum. Adapt the merge and identity for other operations.

## Trường hợp biên
An empty array can be constructed, but queries require a valid non-empty interval. Query order is inclusive.

## Chủ đề liên quan
Lazy Propagation, Sparse Table, Fenwick Tree.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/Segment_Tree/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
