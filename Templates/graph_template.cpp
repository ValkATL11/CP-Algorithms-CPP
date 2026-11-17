#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using Edge = pair<int, ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> g(n);
    for (int i = 0; i < m; ++i) {
        int u, v; ll w;
        cin >> u >> v >> w;
        --u; --v; // Convert 1-based input to 0-based indexing.
        g[u].push_back({v, w});
        // Add reverse edge only when the graph is undirected.
    }
}
