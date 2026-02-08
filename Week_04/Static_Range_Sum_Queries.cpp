// https://cses.fi/problemset/task/1646

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> prefix_sum[i];
        prefix_sum[i] += prefix_sum[i - 1];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        cout << prefix_sum[b] - prefix_sum[a - 1] << "\n";
    }

    return 0;
}