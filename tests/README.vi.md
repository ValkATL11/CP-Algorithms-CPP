# Bộ kiểm thử

Mỗi thuật toán đã triển khai có `test.cpp` riêng cạnh file implementation. CMake tự tìm các file này, tạo executable và đăng ký test.

Chạy:
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
ctest --test-dir build --output-on-failure
```

Đây là các kiểm thử deterministic/smoke test, không phải chứng minh đầy đủ hay randomized stress test.
