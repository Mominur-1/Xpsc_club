// https://codeforces.com/problemset/problem/474/B

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

    int n;
    cin >> n;
    vi a(n);

    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = a[i - 1] + x;
    }

    wh(q)
    {
        int x;
        cin >> x;
        cout << (lower_bound(a.begin(), a.end(), x) - a.begin())+1 << "\n";
    }

    return 0;
}