#include <cassert>
#include "lazy_segment_tree.cpp"
int main() {
    cp::LazySegmentTree st({1, 2, 3, 4});
    assert(st.query(0, 3) == 10);
    st.add(1, 3, 5);
    assert(st.query(0, 3) == 25);
    assert(st.query(2, 2) == 8);
}
