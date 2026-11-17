# CP-Algorithms-CPP

[English](README.md) | [Tiếng Việt]

Sổ tay Competitive Programming thực hành bằng C++17, tập trung vào implementation đáng tin cậy, phân tích độ phức tạp, trường hợp biên và kỹ thuật dùng trong contest. Mục tiêu kiến thức: Codeforces Specialist → Expert; các chủ đề nâng cao được theo dõi minh bạch trong roadmap.

![C++17](https://img.shields.io/badge/C%2B%2B-17-blue)
![License](https://img.shields.io/badge/license-MIT-green)

## Nguyên tắc
- Ưu tiên tính đúng đắn và rõ ràng thay vì số lượng file.
- Mỗi chủ đề đã triển khai có code, tài liệu song ngữ và test riêng.
- Các extension của GNU được ghi rõ khi không portable.
- Chủ đề chưa làm không được trình bày như đã hoàn thành.

## Các chủ đề đã triển khai

| Nhóm | Chủ đề |
|---|---|
| Data Structures | DSU, Fenwick Tree, Segment Tree, Lazy Propagation, Sparse Table |
| Graph Theory | Dijkstra, 0-1 BFS, Kosaraju SCC, Bridges / Articulation Points, Binary Lifting LCA |
| Dynamic Programming | LIS O(N log N) |
| Strings | KMP, Z-Function |
| Search | Two Pointers, Binary Search on the Answer |

Xem [ROADMAP](docs/ROADMAP.md) để biết trạng thái và kế hoạch tiếp theo.

## Cấu trúc repository
```text
Algorithms/                 Sorting, searching, greedy (planned)
Data_Structures/             Các cấu trúc truy vấn đã triển khai
Graph_Theory/                Đường đi ngắn nhất, liên thông, truy vấn cây
Dynamic_Programming/         Tối ưu dãy
String_Algorithms/           Thuật toán chuỗi tuyến tính
Mathematics/                 Số học và biến đổi (planned)
Search_Techniques/            Tìm kiếm đơn điệu và kỹ thuật con trỏ
CPP_Techniques/               Tài liệu STL, built-ins, C++17
CP_Tricks/                    Kỹ thuật cài đặt và debug
Templates/                    Khung code dùng trong contest
Problem_Sets/                 Danh sách bài luyện tập
tests/                        Ghi chú kiểm thử cấp repository
docs/                         Tài liệu tham khảo và roadmap
```

## Biên dịch và kiểm thử

Yêu cầu: GNU G++ hỗ trợ C++17. Mỗi `test.cpp` có thể biên dịch độc lập và include implementation tương ứng.

### Linux
```bash
g++ --version
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/DSU/test.cpp -o dsu_test
./dsu_test
```

### Windows (MinGW-w64)
```powershell
g++ --version
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/DSU/test.cpp -o dsu_test.exe
.\dsu_test.exe
```

Build toàn bộ test bằng CMake:
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

## Tài liệu
- [Độ phức tạp](docs/COMPLEXITY.md)
- [STL reference](docs/STL_REFERENCE.md)
- [GCC built-ins](docs/GCC_BUILTINS.md)
- [Checklist thi đấu](docs/CP_CHECKLIST.md)
- [Đóng góp](docs/CONTRIBUTING.md)

## Đóng góp
Đọc [CONTRIBUTING.md](docs/CONTRIBUTING.md). Code cần biên dịch độc lập, nêu rõ tiền điều kiện và có regression test cho mỗi lỗi được sửa.

## Ghi nhận
- [CP-Algorithms](https://cp-algorithms.com/) — tài liệu tham khảo thuật toán.
- [C++ reference](https://en.cppreference.com/w/cpp) — tài liệu ngôn ngữ và thư viện.

Đây là bộ tài liệu tự triển khai để học tập. Luôn kiểm tra constraints và điều chỉnh trước khi nộp online judge.
