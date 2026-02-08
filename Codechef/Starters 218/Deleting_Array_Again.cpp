// https://www.codechef.com/START218D/problems/DELARR77
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

        vi a(n), c(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : c)
            cin >> x;

        mapii mp;
        for (int i = 0; i < n; i++)
        {
            if(mp.find(c[i]) == mp.end() || mp[c[i]] > i)
            {
                mp[c[i]] = i;
            }
        }

        ll t_cost = 0;
        int idx = n;

        for (auto &it : mp)
        {
            int cost = it.first;

            int k = it.second;
            if (k >= idx)
                continue;

            for (int i = k; i < idx; i++)
            {
                t_cost += 1LL * cost * a[i];
            }
            idx = k;
        }

        cout << t_cost << "\n";
    }

    return 0;
}