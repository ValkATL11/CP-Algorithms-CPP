#include <cassert>
#include "bridges.cpp"
int main() {
    cp::BridgeFinder b(4);
    b.add_edge(0,1,0); b.add_edge(1,2,1); b.add_edge(2,0,2); b.add_edge(1,3,3);
    b.build();
    assert(b.bridges.size() == 1);
    assert(b.is_art[1]);
    assert(!b.is_art[0] && !b.is_art[3]);
}
