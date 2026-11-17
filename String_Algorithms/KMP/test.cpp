#include <cassert>
#include "kmp.cpp"
int main() {
    auto p = cp::kmp_search("ababa", "aba");
    assert((p == vector<int>{0,2}));
    assert(cp::kmp_search("abc", "").size() == 4);
}
