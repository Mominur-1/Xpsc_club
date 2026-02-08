// https://codeforces.com/problemset/problem/1430/C

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
        int n;
        cin >> n;
        vector<pair<int, int>> ab;
        int ans = n;

        while (--n)
        {
            ab.push_back({n, ans});
            ans =(ans+n+1)/2;
        }
        cout << ans << "\n";
        for (pair p : ab)
        {
            cout << p.first << " " << p.second << "\n";
        }
        
    }
    
    return 0;
}