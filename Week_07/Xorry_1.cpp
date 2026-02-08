// https://www.codechef.com/problems/XORRY1

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
        int x;
        cin >> x;

        int b = (1LL << __lg(x));

        cout << (x^b) << " " << b << "\n";
    }
    
    return 0;
}