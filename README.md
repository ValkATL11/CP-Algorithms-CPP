# CP-Algorithms-CPP

[English] | [Tiếng Việt](README.vi.md)

A practical C++17 competitive-programming handbook focused on reliable implementations, complexity analysis, edge cases, and contest-oriented techniques. The target range is Codeforces Specialist → Expert; advanced topics are tracked honestly in the roadmap.

![C++17](https://img.shields.io/badge/C%2B%2B-17-blue)
![License](https://img.shields.io/badge/license-MIT-green)

## Repository Principles
- Correctness and clarity before file count.
- Each implemented topic has an implementation, bilingual documentation, and a focused test.
- GNU extensions are identified as non-portable where relevant.
- Planned topics are not presented as implemented.

## Implemented Topics

| Area | Topics |
|---|---|
| Data Structures | DSU, Fenwick Tree, Segment Tree, Lazy Propagation, Sparse Table |
| Graph Theory | Dijkstra, 0-1 BFS, Kosaraju SCC, Bridges / Articulation Points, Binary Lifting LCA |
| Dynamic Programming | LIS in O(N log N) |
| Strings | KMP, Z-Function |
| Search | Two Pointers, Binary Search on the Answer |

See [ROADMAP](docs/ROADMAP.md) for implementation status and future work.

## Repository Structure
```text
Algorithms/                 Sorting, searching, greedy (planned)
Data_Structures/             Implemented range-query structures
Graph_Theory/                Shortest paths, connectivity, tree queries
Dynamic_Programming/         Sequence optimization
String_Algorithms/           Linear-time string algorithms
Mathematics/                 Number theory and transforms (planned)
Search_Techniques/            Monotone search and pointer techniques
CPP_Techniques/               STL, built-ins, C++17 references
CP_Tricks/                    Implementation and debugging notes
Templates/                    Contest-ready starting points
Problem_Sets/                 Curated practice lists
tests/                        Repository-level notes
docs/                         Reference documentation and roadmap
```

## Build and Test

Requirements: GNU G++ with C++17 support. Each `test.cpp` is standalone and includes its corresponding implementation.

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

Build all focused tests with CMake:
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

## Documentation
- [Complexity reference](docs/COMPLEXITY.md)
- [STL reference](docs/STL_REFERENCE.md)
- [GCC built-ins](docs/GCC_BUILTINS.md)
- [Competitive programming checklist](docs/CP_CHECKLIST.md)
- [Contributing](docs/CONTRIBUTING.md)

## Contribution
See [CONTRIBUTING.md](docs/CONTRIBUTING.md). Keep code independently compilable, document preconditions, and add regression tests for every fix.

## Acknowledgements
- [CP-Algorithms](https://cp-algorithms.com/) for algorithm references.
- [C++ reference](https://en.cppreference.com/w/cpp) for language and library details.

This repository is an independently written study collection. Verify constraints and adapt implementations before submitting to an online judge.
