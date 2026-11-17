#include <cassert>
#include "lca.cpp"
int main() {
    cp::LCA t(5);
    t.add_edge(0,1); t.add_edge(0,2); t.add_edge(1,3); t.add_edge(1,4);
    t.build(0);
    assert(t.query(3,4) == 1);
    assert(t.query(2,4) == 0);
    assert(t.query(0,3) == 0);
}
