// https://cses.fi/problemset/task/2163

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

template <class K, class V>
using hash_map = gp_hash_table<K, V>;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    pbds<int> p;
    for (int i = 1; i <= n; i++) p.insert(i);

    int pos =0;
    while (!p.empty())
    {
        pos = (pos+k)%p.size();
        auto it = p.find_by_order(pos);
        cout << *it << " ";
        p.erase(it);
    }
    

    return 0;
}
