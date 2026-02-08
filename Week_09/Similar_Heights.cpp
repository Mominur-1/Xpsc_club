// https://www.codechef.com/problems/HEIGHTS
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

        mapii freq;
        int mx_h = 0;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            freq[h]++;
            mx_h = max(mx_h, h);
        }

        int singleCount = 0, mxfreq = 0;
        for (auto it : freq)
        {
            if (it.second == 1)
                singleCount++;
            mxfreq = max(mxfreq, it.second);
        }

        int ans = (singleCount + 1) / 2;
        if (singleCount == 1 && freq[mx_h] == 1 && mxfreq == 2)
            ans = 2;
        cout << ans << "\n";
    }
    return 0;
}