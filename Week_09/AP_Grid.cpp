// https://www.codechef.com/problems/APGRID

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
        int n, m;
        cin >> n >> m;

        int rf_d = ((n>m)? 1 : n+1);
        int cf_d = ((n>m)? m+1 : 1);

        f1(i, n)
        {
            int f_v = ((i - 1) * rf_d) + 1;
            f1(j, m)
            {
                cout << ((j - 1) * cf_d) + f_v << " ";
            }
            cout << "\n";
            cf_d++;
        }
    }
    return 0;
}