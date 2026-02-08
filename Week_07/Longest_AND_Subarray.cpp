// https://www.codechef.com/problems/ANDSUBAR

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
        int x =__lg(n);
        int mx_num = n, mx_len = 0;
        while (x >= 0)
        {
            int mn_num = (1ll << x);
            mx_len = max(mx_len, (mx_num-mn_num)+1);
            mx_num = mn_num-1;
            x--;
        }
        
        cout << mx_len << "\n";
    }
    
    return 0;
}