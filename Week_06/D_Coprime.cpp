// https://codeforces.com/problemset/problem/1742/D

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

    vector<vector<int>> coprime(1001);

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (gcd(i, j) == 1)
                coprime[i].push_back(j);
        }
    }

    while (T--)
    {
        int n;
        cin >> n;

        unordered_map<int, int> idx;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            idx[a[i]] = i;
        }

        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            for (auto x : coprime[a[i]])
            {
                if (idx.count(x))
                    ans = max(ans, i + idx[x]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}