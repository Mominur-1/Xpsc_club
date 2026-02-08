// https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> prefix_sum(n+1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> prefix_sum[i];
            prefix_sum[i] += prefix_sum[i-1];
        }
        
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            long long sum = prefix_sum[l-1] + prefix_sum[n] - prefix_sum[r] + (r-l+1)*k;

           cout << ((sum % 2) ? "YES" : "NO" )<<"\n";
        }
        
    }
    
    
    return 0;
}