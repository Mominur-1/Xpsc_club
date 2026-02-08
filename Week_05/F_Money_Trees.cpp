// https://codeforces.com/problemset/problem/1873/F

#include <bits/stdc++.h>
using namespace std;


#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> pre_window_h(n,0);
        int x;
        cin >> x;
        for (int i = 1; i < n; i++)
        {
            int y;
            cin >> y;
            pre_window_h[i] = x % y;
            x = y;
        }
        
        int l =0, max_subarray_len = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (pre_window_h[i])
            {
                l=i;
                sum = a[i];
                continue;
            }
            sum += a[i];
            while (sum > k)
            {
                sum -= a[l];
                l++;
            }
            
            max_subarray_len = max(max_subarray_len, i-l+1);
        }
        
        cout << max_subarray_len << "\n";
        
    }
    
    return 0;
}