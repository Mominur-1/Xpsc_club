// https://www.codechef.com/problems/GCDPERM

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int g = n / k;
        int x = g;
        
        while (k--)
        {
            cout << x << " ";
            x += g;
        }
        cout << "\n";
    }

    return 0;
}