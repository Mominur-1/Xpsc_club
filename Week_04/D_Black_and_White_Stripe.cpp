// https://codeforces.com/problemset/problem/1690/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> prefix_w(n);

        char ch;
        cin >> ch;
        prefix_w[0] = int(ch == 'W');

        for (int i = 1; i < k; i++)
        {
            cin >> ch;
            prefix_w[i] = prefix_w[i - 1] + int(ch == 'W');
        }

        int result = prefix_w[k - 1];

        for (int i = k; i < n; i++)
        {
            cin >> ch;
            prefix_w[i] = prefix_w[i - 1] + int(ch == 'W');
            result = min(result, prefix_w[i] - prefix_w[i - k]);
        }

        cout << result << "\n";
    }

    return 0;
}