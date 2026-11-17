# Fenwick Tree (Binary Indexed Tree)

## Tổng quan
Stores prefix aggregates with a compact array representation.

## Ý tưởng cốt lõi
Each index is responsible for a range determined by its least significant set bit.

## Khi nào sử dụng
Point updates with prefix sums, range sums, inversion counting, and frequency tables.

## Chi tiết cài đặt
This implementation is 1-indexed internally. add(i, delta) and sum_prefix(i) expect 1 ≤ i ≤ n.

## Độ phức tạp
O(log N) per update or prefix query; O(N) memory.

## Giới hạn
The provided structure supports additive operations, not arbitrary associative operations or range updates without extra trees.

## Trường hợp biên
sum_prefix(0) returns zero. Use long long when sums can exceed 32-bit range.

## Chủ đề liên quan
Segment Tree, Coordinate Compression, Inversion Counting.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/Fenwick_Tree/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
