# CP Tricks

## Tránh tràn số
- Ép kiểu trước phép nhân: `1LL * a * b`.
- Dùng `long long` cho prefix sum và distance khi constraints yêu cầu.
- Tránh `(l + r) / 2` nếu giới hạn có thể gây tràn; ưu tiên `l + (r - l) / 2` khi hiệu vẫn biểu diễn được.
- Chỉ dùng `__int128` như GNU extension cho phép tính trung gian rộng hơn.

## Tránh TLE
- Suy ra độ phức tạp từ constraints trước khi chọn cấu trúc dữ liệu.
- Dùng adjacency list cho đồ thị thưa.
- `reserve` vector khi dự đoán được kích thước.
- Tránh sort hoặc build lại nhiều lần trong vòng lặp.

## Nguyên nhân WA thường gặp
- Nhầm indexing 0-based và 1-based.
- Dùng `upper_bound` thay cho `lower_bound` hoặc ngược lại.
- Bỏ sót thành phần liên thông trong graph traversal.
- Chọn sai identity element cho Segment Tree.
- Gọi `__builtin_clz(0)` hoặc `__builtin_ctz(0)`.
- Dùng Dijkstra với cạnh âm.

## Debug
Biên dịch với `-std=c++17 -O2 -Wall -Wextra`; dùng assertion và differential test với brute force nhỏ cho thuật toán tối ưu.
