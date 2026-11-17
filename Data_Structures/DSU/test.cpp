#include <cassert>
#include "dsu.cpp"
int main() {
    cp::DSU d(5);
    assert(d.unite(0, 1));
    assert(d.unite(1, 2));
    assert(!d.unite(0, 2));
    assert(d.find(0) == d.find(2));
    assert(d.size(1) == 3);
    assert(d.size(4) == 1);
}
