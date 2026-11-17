# Sparse Table (Range Minimum Query)

## Tổng quan
Answers static range queries by combining overlapping power-of-two blocks.

## Ý tưởng cốt lõi
For an inclusive interval of length len, use two blocks of length 2^k where k = floor(log2(len)).

## Khi nào sử dụng
Static range minimum/maximum/gcd queries when the array never changes.

## Chi tiết cài đặt
This implementation is 0-indexed and answers inclusive minimum queries.

## Độ phức tạp
O(N log N) preprocessing, O(1) per idempotent range query; O(N log N) memory.

## Giới hạn
No point updates. The O(1) overlapping-block trick requires an idempotent operation such as min, max, or gcd.

## Trường hợp biên
Do not query an empty interval. Preprocessing an empty array is allowed, but query is not.

## Chủ đề liên quan
Segment Tree, Disjoint Sparse Table, RMQ + LCA.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/Sparse_Table/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
