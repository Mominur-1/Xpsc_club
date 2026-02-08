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
        int n;
        cin >> n;
        vi a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        int current_max = 0;
        bool possible = true;

        f0(i, n)
        {
            if (a[i] > b[i] )
            {
                possible = false;
                break;
            }

            if (a[i] < b[i])
            {
                if (a[i] <= current_max)
                {
                    possible = false;
                    break;
                }
            }
            current_max = max(current_max, a[i]);
        }

        yn(possible);
    }
    return 0;
}