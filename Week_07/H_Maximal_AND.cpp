// https://codeforces.com/problemset/problem/1669/H

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> bits(31);
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 31; j++)
            {
                if (a[i] & (1 << j))
                    bits[j]++;
            }
        }

        int ans = 0;
        for (int j = 30; j >= 0; --j)
        {
            if (bits[j] == n)
                ans += (1 << j);
            else
            {
                int need_on = n - bits[j];
                if (need_on <= k)
                    ans += (1 << j), k -= need_on;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}