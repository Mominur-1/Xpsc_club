// https://www.codechef.com/problems/ARRAYSTATE

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
        int n, k, sum = 0;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == n - 1)
            {
                cout << sum + x << "\n";
            }
            else if (i < k)
            {
                sum += x;
            }
            else
            {
                cout << x << " ";
            }
        }
    }
    return 0;
}