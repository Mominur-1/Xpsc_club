// https://codeforces.com/contest/2193/problem/B

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

        vi P(n);
        for (int &x : P)
            cin >> x;

        vi tmp = P;
        sort(tmp.begin(), tmp.end(), greater<int>());

        int l = -1, r = -1;
        f0(i, n)
        {
            if ((l < 0) && (P[i] != tmp[i]))
            {
                l = i;
            }
            else if (P[i] == tmp[l])
            {
                r = max(r, i);
            }
        }

        if (r > 0) 
        {
            reverse(P.begin()+l, P.begin() + r + 1);
        }
        
        for (int x : P)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}