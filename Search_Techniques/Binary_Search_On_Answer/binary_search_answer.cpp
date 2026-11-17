#include <bits/stdc++.h>
using namespace std;

namespace cp {
template<class Predicate>
long long first_true(long long lo, long long hi, Predicate feasible) {
    // Invariant: answer is in (lo, hi], and hi is feasible.
    while (lo + 1 < hi) {
        long long mid = lo + (hi - lo) / 2;
        if (feasible(mid)) hi = mid;
        else lo = mid;
    }
    return hi;
}
} // namespace cp
