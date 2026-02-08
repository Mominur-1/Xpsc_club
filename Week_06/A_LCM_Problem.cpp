// https://codeforces.com/problemset/problem/1389/A

#include <bits/stdc++.h>
using namespace std;


#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
    {
        int l, r;
        cin >> l >> r;

        int x = -1, y = -1;
        
        if (2*l <= r)
        {
            x = l, y = 2*l;
        }
        
        
        cout << x << " " << y << "\n";
    }
    
    return 0;
}