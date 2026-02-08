// https://codeforces.com/problemset/problem/2146/A

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
        vi distinc_a;

        int seg = 0, tmp = 0;
        f0(i, n)
        {
            int x;
            cin >> x;
            if (x != seg)
            {
                distinc_a.push_back(tmp);
                seg = x;
                tmp = 1;
            }
            else if (x == seg)
            {
                tmp++;
            }
        }
        distinc_a.push_back(tmp);

        sort(distinc_a.begin(), distinc_a.end(), greater<int>());

        int ans = 0;
        int i = 1;
        for (int x : distinc_a)
        {
            ans = max(ans, x * i);
            i++;
        }

        cout << ans << "\n";
    }
    return 0;
}