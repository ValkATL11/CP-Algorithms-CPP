#include <cassert>
#include "zero_one_bfs.cpp"
int main() {
    vector<vector<pair<int,int>>> g(4);
    g[0] = {{1,1},{2,0}}; g[2] = {{1,0},{3,1}};
    auto d = cp::zero_one_bfs(4, g, 0);
    assert(d[0] == 0 && d[1] == 0 && d[2] == 0 && d[3] == 1);
}
