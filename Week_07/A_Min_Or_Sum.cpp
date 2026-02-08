// https://codeforces.com/problemset/problem/1635/A

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        int ans = 0;
        while (n--)
        {
            int x;
            cin >> x;
            ans |= x;
        }
        cout << ans << "\n";
    }
    
    return 0;
}