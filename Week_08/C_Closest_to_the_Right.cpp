// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

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
    int n, k;
    cin >> n >> k;
    vi a(n);
    f0(i, n) cin >> a[i];
    while (k--)
    {
        int x;
        cin >> x;
        int idx = n, l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (a[mid] >= x)
            {
                idx = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        cout << idx + 1 << "\n";
    }

    return 0;
}