#include <bits/stdc++.h>
using namespace std;

namespace cp {
vector<int> zero_one_bfs(int n, const vector<vector<pair<int, int>>>& g, int source) {
    const int INF = 1e9;
    vector<int> dist(n, INF);
    deque<int> dq;
    dist[source] = 0; dq.push_front(source);
    while (!dq.empty()) {
        int u = dq.front(); dq.pop_front();
        for (auto [v, w] : g[u]) {
            if (w != 0 && w != 1) throw invalid_argument("Edge weight must be 0 or 1");
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                if (w == 0) dq.push_front(v);
                else dq.push_back(v);
            }
        }
    }
    return dist;
}
} // namespace cp
