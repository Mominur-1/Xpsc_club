// https://codeforces.com/problemset/problem/2162/C

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
        int a, b;
        cin >> a >> b;

        if(__lg(a) < __lg(b))
        {
            cout << -1 << "\n";
            continue;
        }

        int x = (a^b);
        int op = 1;
        vector<int> ans;
        while (x > a)
        {
            
            ans.push_back(a);
            x^= a;
            op ++;
        }
        
        cout << op << "\n" << x << " ";

        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}