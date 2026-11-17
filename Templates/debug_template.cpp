#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
template<class T>
void debug_one(const T& x) { cerr << x; }
template<class A, class B>
void debug_one(const pair<A, B>& p) {
    cerr << '('; debug_one(p.first); cerr << ", "; debug_one(p.second); cerr << ')';
}
template<class T>
void debug_one(const vector<T>& v) {
    cerr << '[';
    for (int i = 0; i < (int)v.size(); ++i) {
        if (i) cerr << ", ";
        debug_one(v[i]);
    }
    cerr << ']';
}
#define debug(x) do { cerr << #x << " = "; debug_one(x); cerr << '\\n'; } while (0)
#else
#define debug(x) ((void)0)
#endif

int main() {
    vector<int> sample = {1, 2, 3};
    debug(sample);
}
