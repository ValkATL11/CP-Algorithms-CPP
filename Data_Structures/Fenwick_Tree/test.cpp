#include <cassert>
#include "fenwick_tree.cpp"
int main() {
    cp::FenwickTree fw(5);
    fw.add(1, 4); fw.add(3, 7); fw.add(5, -2);
    assert(fw.sum_prefix(3) == 11);
    assert(fw.sum_range(3, 5) == 5);
    assert(fw.sum_prefix(0) == 0);
}
