// https://codeforces.com/problemset/problem/1994/B

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

        string s, t;
        cin >> s >> t;

        // vector<int> s(n);
        // for (int & x : s)   cin >> x;
        
        // vector<int> t(n);
        // for (int & x : t)   cin >> x;

        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i] || s[i] == '1')
            {
                if (s[i] == '0') possible = false;
                
                break;
            }
        }
        cout << ((possible)? "YES" : "NO") << "\n";
    }
    
    return 0;
}