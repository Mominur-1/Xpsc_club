// https://www.codechef.com/problems/PERMOR

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        // (a|b) >= max(a,b); (a&b) <= min(a,b);
        for (int i = n; i > 0; --i)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}