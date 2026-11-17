# Knuth-Morris-Pratt (KMP)

## Tổng quan
Finds every occurrence of a pattern in a text in linear time.

## Ý tưởng cốt lõi
The prefix function records the longest proper prefix that is also a suffix, allowing the pattern to shift without rechecking matched characters.

## Khi nào sử dụng
Exact string matching, periodicity, and border-related problems.

## Chi tiết cài đặt
Returns 0-based starting positions. An empty pattern matches at every boundary from 0 through text.size().

## Độ phức tạp
O(N + M) time and O(M) auxiliary memory.

## Giới hạn
Exact matching only; for multiple patterns consider Aho-Corasick.

## Trường hợp biên
Overlapping matches are included. Works with bytes in std::string; Unicode code points need separate handling.

## Chủ đề liên quan
Z-Function, Aho-Corasick, Rolling Hash.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra String_Algorithms/KMP/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
