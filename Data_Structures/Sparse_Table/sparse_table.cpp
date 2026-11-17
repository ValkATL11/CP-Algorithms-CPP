#include <bits/stdc++.h>
using namespace std;

namespace cp {
struct SparseTable {
    int n;
    vector<int> lg;
    vector<vector<long long>> st;
    explicit SparseTable(const vector<long long>& a) : n((int)a.size()), lg(n + 1, 0) {
        for (int i = 2; i <= n; ++i) lg[i] = lg[i / 2] + 1;
        if (!n) return;
        st.assign(lg[n] + 1, vector<long long>(n));
        st[0] = a;
        for (int k = 1; k < (int)st.size(); ++k)
            for (int i = 0; i + (1 << k) <= n; ++i)
                st[k][i] = min(st[k - 1][i], st[k - 1][i + (1 << (k - 1))]);
    }
    long long query(int l, int r) const {
        int k = lg[r - l + 1];
        return min(st[k][l], st[k][r - (1 << k) + 1]);
    }
};
} // namespace cp
