#include <bits/stdc++.h>
using namespace std;

namespace cp {
using ll = long long;
const ll INF = (ll)4e18;
vector<ll> dijkstra(int n, const vector<vector<pair<int, ll>>>& g, int source) {
    vector<ll> dist(n, INF);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
    dist[source] = 0;
    pq.push({0, source});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;
        for (auto [v, w] : g[u]) {
            if (w < 0) throw invalid_argument("Dijkstra requires non-negative weights");
            if (d <= INF - w && dist[v] > d + w) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
} // namespace cp
