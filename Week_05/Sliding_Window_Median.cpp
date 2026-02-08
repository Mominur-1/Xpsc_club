// https://cses.fi/problemset/task/1076

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using pbds = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

template <class K, class V>
using hash_map = gp_hash_table<K, V>;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int l=0;
    pbds<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        p.insert({a[i], i});
        if(i-l+1 == k)
        {
            cout << p.find_by_order((k-1)/2)->first << " ";
            p.erase({a[l], l});
            l++;
        }
    }
    
    
    return 0;
}