# Binary Search on the Answer

## Tổng quan
Searches the smallest feasible value when feasibility is monotonic.

## Ý tưởng cốt lõi
Maintain an infeasible lower bound and a feasible upper bound; use a midpoint that cannot overflow.

## Khi nào sử dụng
Minimum capacity, minimum maximum load, and optimization problems with a monotone decision predicate.

## Chi tiết cài đặt
The helper finds the first x in [lo, hi] for which feasible(x) is true. Preconditions: feasible(hi) is true and feasibility is monotone.

## Độ phức tạp
O(log(R-L) × cost(check)) time; O(1) extra memory beyond check().

## Giới hạn
A non-monotone predicate invalidates binary search. Establish bounds and monotonicity before coding.

## Trường hợp biên
The implementation uses lo + (hi-lo)/2; ensure hi-lo itself fits in long long.

## Chủ đề liên quan
Parametric Search, Parallel Binary Search, Lower Bound.

## Biên dịch và kiểm thử
Từ thư mục gốc repository:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Search_Techniques/Binary_Search_On_Answer/test.cpp -o test
./test
```

## Tài liệu tham khảo
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
