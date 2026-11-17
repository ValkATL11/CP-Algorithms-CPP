#include <cassert>
#include "kosaraju.cpp"
int main() {
    cp::Kosaraju s(5);
    s.add_edge(0,1); s.add_edge(1,0); s.add_edge(1,2);
    s.add_edge(2,3); s.add_edge(3,2); s.add_edge(3,4);
    assert(s.build() == 3);
    assert(s.comp[0] == s.comp[1]);
    assert(s.comp[2] == s.comp[3]);
    assert(s.comp[1] != s.comp[2]);
}
