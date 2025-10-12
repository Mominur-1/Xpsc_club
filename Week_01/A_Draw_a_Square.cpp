// https://codeforces.com/problemset/problem/2074/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--)
    {
        int l, r, u, d;
        cin >> l >> r >> u >> d;

        cout << ((l==r && r==u && u==d) ? "Yes" : "No" )<< endl;
    }
    
    
    return 0;
}