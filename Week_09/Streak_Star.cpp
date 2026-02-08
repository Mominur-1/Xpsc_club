// https://www.codechef.com/problems/STKSTR

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
        int n, x, i = 0;
        cin >> n >> x;
        vi A(n);
        f0(j, n) cin >> A[j];

        vector<pair<int, int>> Split;

        for (int j = 1; j < n; j++)
        {
            if (A[j - 1] > A[j])
            {
                Split.push_back({i, j - 1});
                i = j;
            }
        }
        Split.push_back({i, n-1});

        int ans = Split[0].second + 1;

        for (int j = 1; j < Split.size(); j++)
        {
            int l = Split[j].first, r = Split[j].second;
            int tmp = A[l] * x;
            if (A[l-1] <= tmp && l==r)
            {
                ans = max(ans, r - Split[j-1].first + 1);
            }
            else if (A[l-1] <= tmp && tmp <= A[l+1])
            {
                ans = max(ans, r - Split[j-1].first + 1);
            }
            else if (A[l-1] <= tmp)
            {
                ans = max(ans, l - Split[j-1].first + 1);
            }
            ans = max (ans, r-l+1);
        }
        cout << ans << "\n";
    }
    return 0;
}