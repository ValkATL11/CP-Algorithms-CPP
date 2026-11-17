#include <bits/stdc++.h>
using namespace std;

namespace cp {
struct FenwickTree {
    int n;
    vector<long long> bit;
    explicit FenwickTree(int n = 0) : n(n), bit(n + 1, 0) {}
    void add(int i, long long delta) {
        for (; i <= n; i += i & -i) bit[i] += delta;
    }
    long long sum_prefix(int i) const {
        long long ans = 0;
        for (; i > 0; i -= i & -i) ans += bit[i];
        return ans;
    }
    long long sum_range(int l, int r) const {
        return sum_prefix(r) - sum_prefix(l - 1);
    }
};
} // namespace cp
