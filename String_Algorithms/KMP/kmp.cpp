#include <bits/stdc++.h>
using namespace std;

namespace cp {
vector<int> prefix_function(const string& s) {
    int n = (int)s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; ++i) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j]) ++j;
        pi[i] = j;
    }
    return pi;
}
vector<int> kmp_search(const string& text, const string& pattern) {
    if (pattern.empty()) {
        vector<int> ans(text.size() + 1);
        iota(ans.begin(), ans.end(), 0);
        return ans;
    }
    vector<int> pi = prefix_function(pattern), ans;
    for (int i = 0, j = 0; i < (int)text.size(); ++i) {
        while (j > 0 && text[i] != pattern[j]) j = pi[j - 1];
        if (text[i] == pattern[j]) ++j;
        if (j == (int)pattern.size()) {
            ans.push_back(i - j + 1);
            j = pi[j - 1];
        }
    }
    return ans;
}
} // namespace cp
