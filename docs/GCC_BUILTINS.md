# GCC Built-ins and GNU Extensions

These facilities are useful in GNU G++ contest environments but are not all standard C++17.

| Built-in | Meaning |
|---|---|
| `__builtin_popcount(unsigned)` | Number of set bits in an unsigned int |
| `__builtin_popcountll(unsigned long long)` | Number of set bits in 64 bits |
| `__builtin_clz(unsigned)` | Leading zero count |
| `__builtin_ctz(unsigned)` | Trailing zero count |
| `__builtin_parity(unsigned)` | Parity of set-bit count |
| `__builtin_ffs(int)` | 1-based index of least significant set bit; 0 if input is zero |

## Critical preconditions
- `__builtin_clz(0)` and `__builtin_ctz(0)` have undefined behavior. Guard zero first.
- Match the argument width to the intended operation. For 64-bit values use the `ll` variants where available.
- For signed negative values, convert to the corresponding unsigned type when bit-level semantics are intended.
- `__int128` is a GNU extension, not a standard C++17 type. It is useful for intermediate products but is not directly streamable with `cout`.

Example:
```cpp
unsigned x = 0;
int bits = __builtin_popcount(x);
int msb = (x == 0 ? -1 : 31 - __builtin_clz(x));
int lsb = (x == 0 ? -1 : __builtin_ctz(x));
```

## PBDS note
GNU Policy-Based Data Structures (`<ext/pb_ds/assoc_container.hpp>`) provide order-statistics trees with `find_by_order(k)` and `order_of_key(x)`. PBDS is GNU-specific and is not portable standard C++. It is intentionally not included as a completed implementation in this repository yet.
