// https://codeforces.com/problemset/problem/1805/A

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

        int Xor = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            Xor ^= x;
        }
        
        if (n%2) cout << Xor;
        else
        {
            cout << ((Xor)? -1 : Xor);
        }
        cout << "\n";
    }
    
    return 0;
}