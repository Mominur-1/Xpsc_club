// https://codeforces.com/problemset/problem/1370/A

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
        int n;
        cin >> n;
        n-= (n%2);
        cout << __gcd(n, n/2) << "\n";
    }
    
    return 0;
}