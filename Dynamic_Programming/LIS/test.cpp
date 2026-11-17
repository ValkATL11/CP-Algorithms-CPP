#include <cassert>
#include "lis.cpp"
int main() {
    vector<long long> a = {3, 1, 2, 2, 5, 4};
    auto ids = cp::lis_indices(a);
    assert(ids.size() == 3);
    for (int i = 1; i < (int)ids.size(); ++i) {
        assert(ids[i - 1] < ids[i]);
        assert(a[ids[i - 1]] < a[ids[i]]);
    }
    assert(cp::lis_indices({}).empty());
}
