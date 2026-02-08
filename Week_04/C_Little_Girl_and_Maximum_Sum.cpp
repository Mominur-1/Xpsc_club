// https://codeforces.com/problemset/problem/276/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> d(n);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        d[l - 1]++;
        if (r < n)
        {
            d[r]--;
        }
    }

    for (int i = 1; i < n; i++)
    {
        d[i] += d[i - 1];
    }

    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());

    long long max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        max_sum += 1ll * a[i] * d[i];
    }

    cout << max_sum;

    return 0;
}