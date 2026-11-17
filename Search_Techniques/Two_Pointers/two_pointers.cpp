#include <bits/stdc++.h>
using namespace std;

namespace cp {
pair<int, int> find_pair_sum(const vector<long long>& a, long long target) {
    int l = 0, r = (int)a.size() - 1;
    while (l < r) {
        long long sum = a[l] + a[r];
        if (sum == target) return {l, r};
        if (sum < target) ++l;
        else --r;
    }
    return {-1, -1};
}
} // namespace cp
