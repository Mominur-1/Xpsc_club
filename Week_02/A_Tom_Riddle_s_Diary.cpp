// https://codeforces.com/problemset/problem/855/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    unordered_map<string, int> possessed_by;

    while (n--)
    {
        string S;
        cin >> S;
        if (possessed_by[S])
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << '\n';
        possessed_by[S] ++;
    }
    
    
    return 0;
}