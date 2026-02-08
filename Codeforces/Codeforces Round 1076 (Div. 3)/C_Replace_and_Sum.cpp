// https://codeforces.com/contest/2193/problem/C

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
        int n, q;
        cin >> n >> q;
        vi a(n);
        for (int &x : a)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = max(a[i], x);
        }

        for (int i = n - 1 - 1; i >= 0; i--)
        {
            a[i] = max(a[i], a[i + 1]);
        }

        vll prefix_sum(n + 1, 0);
        prefix_sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << prefix_sum[r] - prefix_sum[l - 1] << " ";
        }
        cout << "\n";
    }
    return 0;
}