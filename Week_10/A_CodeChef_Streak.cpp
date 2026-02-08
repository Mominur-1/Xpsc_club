// https://www.codechef.com/problems/CS2023_STK

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
        int n;
        cin >> n;
        int Om = 0, Addy = 0;
        int tmp = 0;
        f0(i, n)
        {
            int x;
            cin >> x;
            if (!x)
            {
                Om = max(Om, tmp), tmp = 0;
                continue;
            }
            tmp++;
        }
        Om = max(Om, tmp), tmp = 0;

        f0(i, n)
        {
            int x;
            cin >> x;
            if (!x)
            {
                Addy = max(Addy, tmp), tmp = 0;
                continue;
            }
            tmp++;
        }
        Addy = max(Addy, tmp);

        cout << ((Addy == Om) ? "Draw" : ((Addy > Om) ? "Addy" : "Om")) << "\n";
    }
    return 0;
}