// https://codeforces.com/problemset/problem/2149/C

#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define yy cout << "YES" << "\n"
#define nn cout << "NO" << "\n"
#define yn(found) cout << ((found) ? "YES" : "NO") << "\n"
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
        int n, mex;
        cin >> n >> mex;
        int cnt_mex = 0, cntBelowMex = mex;
        vector<bool> missingBelowMex(mex, 1);
        f0(i, n)
        {
            int x;
            cin >> x;
            if (x < mex && missingBelowMex[x])
            {
                cntBelowMex--;
                missingBelowMex[x] = 0;
            }
            else if (x == mex)
            {
                cnt_mex++;
            }
        }
       
        cout << max(cnt_mex, cntBelowMex) << "\n";
    }
    return 0;
}