#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod_pow(ll a, ll e, ll mod) {
    ll r = 1 % mod;
    for (a %= mod; e > 0; e >>= 1, a = (__int128)a * a % mod)
        if (e & 1) r = (__int128)r * a % mod;
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
