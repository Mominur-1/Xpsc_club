// https://cses.fi/problemset/task/1090

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

    int n, x, gondolas = 0;
    cin >> n >> x;
    vi c(n);
    for (auto &k : c)
        cin >> k;

    sort(c.begin(), c.end());
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if ((c[i] + c[j]) <= x)
        {
            i++;
        }
        j--;
        gondolas++;
    }

    cout << gondolas << "\n";

    return 0;
}