#include <bits/stdc++.h>
using namespace std;

namespace cp {
struct SegmentTree {
    int n;
    vector<long long> st;
    explicit SegmentTree(const vector<long long>& a) : n((int)a.size()), st(4 * max(1, n), 0) {
        if (n) build(1, 0, n - 1, a);
    }
    void build(int p, int l, int r, const vector<long long>& a) {
        if (l == r) { st[p] = a[l]; return; }
        int m = (l + r) / 2;
        build(p * 2, l, m, a); build(p * 2 + 1, m + 1, r, a);
        st[p] = st[p * 2] + st[p * 2 + 1];
    }
    void update(int idx, long long val) { update(1, 0, n - 1, idx, val); }
    void update(int p, int l, int r, int idx, long long val) {
        if (l == r) { st[p] = val; return; }
        int m = (l + r) / 2;
        if (idx <= m) update(p * 2, l, m, idx, val);
        else update(p * 2 + 1, m + 1, r, idx, val);
        st[p] = st[p * 2] + st[p * 2 + 1];
    }
    long long query(int ql, int qr) const { return query(1, 0, n - 1, ql, qr); }
    long long query(int p, int l, int r, int ql, int qr) const {
        if (qr < l || r < ql) return 0;
        if (ql <= l && r <= qr) return st[p];
        int m = (l + r) / 2;
        return query(p * 2, l, m, ql, qr) + query(p * 2 + 1, m + 1, r, ql, qr);
    }
};
} // namespace cp
