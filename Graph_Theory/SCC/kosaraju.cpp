#include <bits/stdc++.h>
using namespace std;

namespace cp {
struct Kosaraju {
    int n;
    vector<vector<int>> g, rg;
    vector<int> order, comp;
    vector<char> seen;
    explicit Kosaraju(int n) : n(n), g(n), rg(n) {}
    void add_edge(int u, int v) { g[u].push_back(v); rg[v].push_back(u); }
    void dfs1(int u) {
        seen[u] = true;
        for (int v : g[u]) if (!seen[v]) dfs1(v);
        order.push_back(u);
    }
    void dfs2(int u, int id) {
        comp[u] = id;
        for (int v : rg[u]) if (comp[v] == -1) dfs2(v, id);
    }
    int build() {
        seen.assign(n, false); comp.assign(n, -1); order.clear();
        for (int i = 0; i < n; ++i) if (!seen[i]) dfs1(i);
        reverse(order.begin(), order.end());
        int cnt = 0;
        for (int u : order) if (comp[u] == -1) dfs2(u, cnt++);
        return cnt;
    }
};
} // namespace cp
