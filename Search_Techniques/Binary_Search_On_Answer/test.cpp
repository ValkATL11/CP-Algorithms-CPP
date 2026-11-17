#include <cassert>
#include "binary_search_answer.cpp"
int main() {
    long long ans = cp::first_true(0, 100, [](long long x) { return x * x >= 30; });
    assert(ans == 6);
    assert(cp::first_true(0, 1, [](long long) { return true; }) == 1);
}
