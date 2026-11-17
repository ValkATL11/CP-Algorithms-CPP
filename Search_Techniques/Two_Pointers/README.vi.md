# Two Pointers (Sorted Pair Sum)

## Tổng quan
Uses two indices moving inward to find a pair meeting a target in a sorted array.

## Ý tưởng cốt lõi
If the current sum is too small, increase the left value; if too large, decrease the right value.

## Khi nào sử dụng
Pair sum, removing duplicates, interval merging, and monotonic window problems.

## Chi tiết cài đặt
The input must be sorted in non-decreasing order. Returns one pair of 0-based indices or {-1,-1}.

## Độ phức tạp
O(N) time after sorting; O(1) auxiliary memory excluding sorting.

## Giới hạn
The simple inward movement relies on sorted order and monotonicity of the condition.

## Trường hợp biên
Requires at least two elements. Sum is computed in long long to reduce overflow risk.

## Chủ đề liên quan
Sliding Window, Binary Search, Meet in the Middle.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Search_Techniques/Two_Pointers/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
