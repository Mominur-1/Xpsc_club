// https://cses.fi/problemset/task/1629

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

class cmp
{
public:
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        return a.second < b.second;
    }
};

int main()
{
    fastio;

    int n;
    cin >> n;
    vector<pair<int, int>> movies;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        movies.push_back({a, b});
    }

    sort(movies.begin(), movies.end(), cmp());

    int last_end = 0, Wmx_m = 0;
    for (auto p : movies)
    {
        if (p.first >= last_end)
        {
            last_end = p.second;
            Wmx_m++;
        }
    }

    cout << Wmx_m;
    
    return 0;
}