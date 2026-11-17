#include <bits/stdc++.h>
using namespace std;

namespace cp {
struct BridgeFinder {
    int n, timer = 0;
    vector<vector<pair<int,int>>> g;
    vector<int> tin, low;
    vector<pair<int,int>> bridges;
    vector<char> is_art;
    BridgeFinder(int n) : n(n), g(n), tin(n, -1), low(n), is_art(n, false) {}
    void add_edge(int u, int v, int id) {
        g[u].push_back({v, id}); g[v].push_back({u, id});
    }
    void dfs(int u, int parent_edge = -1) {
        tin[u] = low[u] = timer++;
        int children = 0;
        for (auto [v, id] : g[u]) {
            if (id == parent_edge) continue;
            if (tin[v] != -1) low[u] = min(low[u], tin[v]);
            else {
                dfs(v, id);
                low[u] = min(low[u], low[v]);
                if (low[v] > tin[u]) bridges.push_back({u, v});
                if (parent_edge != -1 && low[v] >= tin[u]) is_art[u] = true;
                ++children;
            }
        }
        if (parent_edge == -1 && children > 1) is_art[u] = true;
    }
    void build() {
        for (int i = 0; i < n; ++i) if (tin[i] == -1) dfs(i);
    }
};
} // namespace cp
