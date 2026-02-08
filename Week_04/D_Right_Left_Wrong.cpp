// https://codeforces.com/problemset/problem/2000/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }

        string s;
        cin >> s;

        long long ans = 0;
        int l = 1;
        int r = n;

        while (r > l)
        {
            while (l <= n && s[l - 1] == 'R')
                l++;
            while (r >= 0 && s[r - 1] == 'L')
                r--;

            if (l < r)
            {
                ans += a[r] - a[l - 1];
                l++;
                r--;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
