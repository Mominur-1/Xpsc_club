// https://www.codechef.com/problems/TOWERTOP

#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define yy cout << "YES" << "\n"
#define nn cout << "NO" << "\n"
#define yn cout << ((found) ? "YES" : "NO") << "\n"
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define si set<int>
#define pb push_back
#define mapii map<int, int>
#define mapci map<char, int>
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define wh(tc) \
    int tc;    \
    cin >> tc; \
    while (tc--)

int main()
{
    fastio;
    wh(tc)
    {
        ll x, m;
        cin >> x >> m;

        if (m == 0)
        {
            cout << 0 << "\n";
            continue;
        }

        if (x == 1)
        {
            cout << m << "\n";
            continue;
        }

        int need_step_ftower = ceil(log2(x))+1;
        if (need_step_ftower > m)
        {
            cout << 0;
        }
        else
        {
            cout << (m - need_step_ftower) + 1;
        }

        cout << "\n";
    }
    return 0;
}