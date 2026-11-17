# Z-Function

## Tổng quan
Computes the length of the longest substring starting at each position that matches a prefix.

## Ý tưởng cốt lõi
Maintain the rightmost Z-box [l,r]. Inside the box, reuse previously computed values and extend only when necessary.

## Khi nào sử dụng
Pattern matching through pattern + separator + text, string periodicity, and prefix comparisons.

## Chi tiết cài đặt
Convention: z[0] = 0. Choose a separator that cannot occur in the input alphabet when concatenating strings.

## Độ phức tạp
O(N) time and O(N) memory.

## Giới hạn
For arbitrary byte strings, a unique integer sentinel is safer than assuming a character separator is absent.

## Trường hợp biên
Empty strings return an empty vector. Single-character strings return {0}.

## Chủ đề liên quan
KMP, Rolling Hash, Manacher.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra String_Algorithms/Z_Function/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
