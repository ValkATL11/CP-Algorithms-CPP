# Longest Increasing Subsequence (LIS)

## Tổng quan
Finds the length and one reconstruction of a longest strictly increasing subsequence.

## Ý tưởng cốt lõi
Maintain tails[len-1], the smallest possible tail value for an increasing subsequence of that length.

## Khi nào sử dụng
Subsequence optimization, sorting reductions, and sequence DP.

## Chi tiết cài đặt
Uses lower_bound, so the subsequence is strictly increasing. The returned indices are 0-based.

## Độ phức tạp
O(N log N) time and O(N) memory.

## Giới hạn
This is not the number of LIS and does not count all optimal subsequences.

## Trường hợp biên
Empty input returns an empty sequence. For non-decreasing LIS, use upper_bound instead.

## Chủ đề liên quan
Patience Sorting, Bitonic Subsequence, LCS.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Dynamic_Programming/LIS/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
