// https://codeforces.com/problemset/problem/1692/E

#include <bits/stdc++.h>
using namespace std;


#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int l=0, sum=0, max_subarray=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum +=a[i];
            
            while (sum > s)
            {
                sum -=a[l];
                l++;
            }
            
            max_subarray = max(max_subarray, i-l+1);
        }
        
        cout << ((sum == s)? n-max_subarray : -1) << "\n";
    }

    return 0;
}