#include <bits/stdc++.h>
using namespace std;

namespace cp {
vector<int> lis_indices(const vector<long long>& a) {
    int n = (int)a.size();
    vector<long long> tails;
    vector<int> tail_idx, parent(n, -1);
    for (int i = 0; i < n; ++i) {
        int pos = lower_bound(tails.begin(), tails.end(), a[i]) - tails.begin();
        if (pos == (int)tails.size()) {
            tails.push_back(a[i]); tail_idx.push_back(i);
        } else {
            tails[pos] = a[i]; tail_idx[pos] = i;
        }
        if (pos > 0) parent[i] = tail_idx[pos - 1];
    }
    vector<int> ans;
    if (tail_idx.empty()) return ans;
    for (int v = tail_idx.back(); v != -1; v = parent[v]) ans.push_back(v);
    reverse(ans.begin(), ans.end());
    return ans;
}
} // namespace cp
