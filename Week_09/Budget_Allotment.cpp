// https://www.codechef.com/problems/BUDGET25

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
        int n, x;
        cin >> n >> x;
        vi A(n);
        for (auto &a : A)
            cin >> a;

        sort(A.begin(), A.end(), greater<int>());
        ll extra_amount = 0, sector = 0;

        for (auto a : A)
        {
            extra_amount += (a-x);
            if (extra_amount < 0)
            {
                break;
            }
            
            sector ++;
        }

        cout << sector << "\n";
    }
    return 0;
}