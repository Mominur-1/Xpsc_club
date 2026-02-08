// https://codeforces.com/problemset/problem/600/B

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using pbds = tree<
    T,
    null_type,
    less_equal<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

template <class K, class V>
using hash_map = gp_hash_table<K, V>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

int main()
{
    int n, m;
    cin >> n >> m;
    pbds<int> p;
    while (n--)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    
    while (m--)
    {
        int x;
        cin >> x;
        cout << p.order_of_key(x+1) << " ";
    }
    cout << "\n";
    
    return 0;
}