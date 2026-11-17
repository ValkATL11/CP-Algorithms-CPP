#include <bits/stdc++.h>
using namespace std;

namespace cp {
struct LazySegmentTree {
    int n;
    vector<long long> st, lazy;
    explicit LazySegmentTree(const vector<long long>& a) : n((int)a.size()),
        st(4 * max(1, n), 0), lazy(4 * max(1, n), 0) {
        if (n) build(1, 0, n - 1, a);
    }
    void build(int p, int l, int r, const vector<long long>& a) {
        if (l == r) { st[p] = a[l]; return; }
        int m = (l + r) / 2;
        build(p * 2, l, m, a); build(p * 2 + 1, m + 1, r, a);
        st[p] = st[p * 2] + st[p * 2 + 1];
    }
    void apply(int p, int l, int r, long long v) {
        st[p] += v * (r - l + 1);
        lazy[p] += v;
    }
    void push(int p, int l, int r) {
        if (!lazy[p] || l == r) return;
        int m = (l + r) / 2;
        apply(p * 2, l, m, lazy[p]);
        apply(p * 2 + 1, m + 1, r, lazy[p]);
        lazy[p] = 0;
    }
    void add(int ql, int qr, long long v) { add(1, 0, n - 1, ql, qr, v); }
    void add(int p, int l, int r, int ql, int qr, long long v) {
        if (qr < l || r < ql) return;
        if (ql <= l && r <= qr) { apply(p, l, r, v); return; }
        push(p, l, r);
        int m = (l + r) / 2;
        add(p * 2, l, m, ql, qr, v);
        add(p * 2 + 1, m + 1, r, ql, qr, v);
        st[p] = st[p * 2] + st[p * 2 + 1];
    }
    long long query(int ql, int qr) { return query(1, 0, n - 1, ql, qr); }
    long long query(int p, int l, int r, int ql, int qr) {
        if (qr < l || r < ql) return 0;
        if (ql <= l && r <= qr) return st[p];
        push(p, l, r);
        int m = (l + r) / 2;
        return query(p * 2, l, m, ql, qr) + query(p * 2 + 1, m + 1, r, ql, qr);
    }
};
} // namespace cp
