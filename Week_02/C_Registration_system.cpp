// https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            cout << "OK";
        }
        else
        {
            cout << s << mp[s] ;
        }
        cout << '\n';

        mp[s] ++;
    }
    
    
    return 0;
}