#include <cassert>
#include "z_function.cpp"
int main() {
    auto z = cp::z_function("aaaaa");
    assert((z == vector<int>{0,4,3,2,1}));
    assert(cp::z_function("").empty());
}
