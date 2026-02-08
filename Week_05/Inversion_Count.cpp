// https://www.spoj.com/problems/INVCNT/en/

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
    tree_order_statistics_node_update>;

template <class K, class V>
using hash_map = gp_hash_table<K, V>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        long long ans = 0;
        pbds<int> p;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            p.insert(x);
            ans += p.size() - p.order_of_key(x+1);
        }

        cout << ans << "\n";
    }

    return 0;
}