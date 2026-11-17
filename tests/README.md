# Test Suite

Every implemented algorithm currently has a focused `test.cpp` beside its implementation. CMake discovers these files recursively and registers one executable/test per file.

Run:
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
ctest --test-dir build --output-on-failure
```

These are deterministic smoke/regression tests, not exhaustive proofs or randomized stress tests.
