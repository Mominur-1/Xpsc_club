// https://codeforces.com/problemset/problem/1399/C

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int mx_team = 0;
        for (int i = 2; i <= n * 2; i++) // because max w == n, w+w=n+n=2*n
        {
            int tmp_max = 0;
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (a[l] + a[r] < i)
                {
                    l++;
                }
                else if (a[l] + a[r] > i)
                {
                    r--;
                }
                else
                {
                    tmp_max++;
                    l++, r--;
                }
            }
            mx_team = max(mx_team, tmp_max);
        }
        cout << mx_team << "\n";
    }

    return 0;
}
