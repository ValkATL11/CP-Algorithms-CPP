#include <bits/stdc++.h>
using namespace std;

namespace cp {
struct LCA {
    int n, LOG;
    vector<vector<int>> g, up;
    vector<int> depth;
    LCA(int n) : n(n), LOG(1), g(n), depth(n) {
        while ((1 << LOG) <= max(1, n)) ++LOG;
        up.assign(LOG, vector<int>(n, 0));
    }
    void add_edge(int u, int v) { g[u].push_back(v); g[v].push_back(u); }
    void build(int root = 0) {
        vector<int> parent(n, -1), order;
        parent[root] = root;
        order.push_back(root);
        for (int i = 0; i < (int)order.size(); ++i) {
            int u = order[i];
            for (int v : g[u]) if (v != parent[u]) {
                parent[v] = u; depth[v] = depth[u] + 1; order.push_back(v);
            }
        }
        for (int v = 0; v < n; ++v) up[0][v] = parent[v] == -1 ? v : parent[v];
        for (int k = 1; k < LOG; ++k)
            for (int v = 0; v < n; ++v) up[k][v] = up[k - 1][up[k - 1][v]];
    }
    int lift(int v, int d) const {
        for (int k = 0; k < LOG; ++k) if (d >> k & 1) v = up[k][v];
        return v;
    }
    int query(int a, int b) const {
        if (depth[a] < depth[b]) swap(a, b);
        a = lift(a, depth[a] - depth[b]);
        if (a == b) return a;
        for (int k = LOG - 1; k >= 0; --k)
            if (up[k][a] != up[k][b]) a = up[k][a], b = up[k][b];
        return up[0][a];
    }
};
} // namespace cp
