#include <cassert>
#include "segment_tree.cpp"
int main() {
    cp::SegmentTree st({2, 1, 3, 4, 5});
    assert(st.query(1, 3) == 8);
    st.update(2, 10);
    assert(st.query(0, 4) == 22);
}
