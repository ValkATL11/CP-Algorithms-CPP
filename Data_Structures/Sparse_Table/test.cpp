#include <cassert>
#include "sparse_table.cpp"
int main() {
    cp::SparseTable st({7, 2, 9, -1, 4, 3});
    assert(st.query(1, 4) == -1);
    assert(st.query(4, 5) == 3);
}
