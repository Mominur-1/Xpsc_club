// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552

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
    for (auto &x : a)
        cin >> x;
    wh(tc)
    {
        int q;
        cin >> q;
        auto imidiate_tall = (upper_bound(a.begin(), a.end(), q));
        auto imidiate_short = (((lower_bound(a.begin(), a.end(), q)) == a.begin()) ? a.end() : (lower_bound(a.begin(), a.end(), q) - 1));

        if (imidiate_short != a.end())
        {
            cout << *imidiate_short;
        }
        else
            cout << "X";

        cout << " ";

        if (imidiate_tall != a.end())
        {
            cout << *imidiate_tall;
        }
        else
            cout << "X";

        cout << "\n";
    }

    return 0;
}