# Lazy Segment Tree (Range Add, Range Sum)

## Tổng quan
Extends a Segment Tree with deferred updates for whole intervals.

## Ý tưởng cốt lõi
A lazy tag records an update that has affected a node aggregate but has not yet been pushed to its children.

## Khi nào sử dụng
Range addition with range sum, and similar range-update/range-query tasks.

## Chi tiết cài đặt
All public intervals are 0-indexed and inclusive. Applying x to a segment of length len adds x × len to its sum.

## Độ phức tạp
O(log N) per range update or query; O(N) memory.

## Giới hạn
This implementation supports range addition and range sum only. Other update types need a correctly designed tag-composition rule.

## Trường hợp biên
Push before descending into children. Use 64-bit values when the total sum may exceed int.

## Chủ đề liên quan
Segment Tree, Fenwick Tree with two BITs, Segment Tree Beats.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/Lazy_Propagation/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
