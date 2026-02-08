// https://cses.fi/problemset/task/1091

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

    int n, m;
    cin >> n >> m;

    multiset<int> t;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        t.insert(x);
    }

    f0(i,m)
    {
        int x;
        cin >> x;

        auto it = t.upper_bound(x);

        if (it==t.begin())
        {
            cout << -1;
        }
        else
        {
            --it;
            cout << *it ;
            t.erase(it);
        }

        cout << "\n";
    }

    return 0;
}