#include <cassert>
#include "two_pointers.cpp"
int main() {
    auto p = cp::find_pair_sum({1, 2, 4, 7, 11}, 9);
    assert(p.first == 1 && p.second == 3);
    assert(cp::find_pair_sum({1, 2}, 8) == make_pair(-1, -1));
}
