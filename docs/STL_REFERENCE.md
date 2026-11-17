# STL Reference for Competitive Programming

All examples assume `#include <bits/stdc++.h>` and `using namespace std;`.

## Sorting and selection
```cpp
sort(a.begin(), a.end());
stable_sort(a.begin(), a.end());
nth_element(a.begin(), a.begin() + k, a.end()); // element at k is in sorted position
partial_sort(a.begin(), a.begin() + k, a.end());
```
`nth_element` does not sort either partition. Check that `k` is in range.

## Binary search on sorted ranges
```cpp
auto it1 = lower_bound(a.begin(), a.end(), x); // first >= x
auto it2 = upper_bound(a.begin(), a.end(), x); // first > x
bool exists = binary_search(a.begin(), a.end(), x);
```
These algorithms require the range to be partitioned according to the searched comparator (normally sorted).

## Erase-remove and uniqueness
```cpp
a.erase(remove(a.begin(), a.end(), x), a.end());
sort(a.begin(), a.end());
a.erase(unique(a.begin(), a.end()), a.end());
```
`unique` only removes consecutive duplicates; sort first if global deduplication is intended.

## Accumulation and construction
```cpp
long long sum = accumulate(a.begin(), a.end(), 0LL);
partial_sum(a.begin(), a.end(), pref.begin());
iota(p.begin(), p.end(), 0);
next_permutation(p.begin(), p.end());
```
Use `0LL` to avoid an `int` accumulator overflow when the result requires 64 bits.

## Predicates and extrema
```cpp
auto it = max_element(a.begin(), a.end());
int cnt = count_if(a.begin(), a.end(), [](int x) { return x > 0; });
auto pos = find_if(a.begin(), a.end(), [](int x) { return x % 2 == 0; });
```
An iterator returned by `max_element` / `find_if` may equal `end()` for an empty range or no match.

## Containers and performance
- `reserve(n)` can reduce reallocations when the approximate size is known.
- Prefer `const auto&` in read-only range loops over copying large objects.
- `emplace_back(args...)` constructs an element in place; it is not automatically faster in every situation.
- `greater<>` is a transparent comparator and is useful for min-heaps:
  `priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;`
- `tuple`, `tie`, and structured bindings improve multi-field code:
  `auto [dist, node] = pq.top();`
