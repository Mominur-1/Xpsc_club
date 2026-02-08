// https://codeforces.com/problemset/problem/1872/C

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
        int l, r;
        cin >> l >> r;

        if (r <= 3)
        {
            cout << -1 << "\n";
            continue;
        }

        l = max(l, 4);

        // Case 1: l == r → single number
        if (l == r)
        {
            int n = l;
            bool found = false;

            // Find any divisor d such that 1 < d < n
            for (int d = 2; d * d <= n; d++)
            {
                if (n % d == 0)
                {
                    cout << d << " " << n - d << "\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << -1 << "\n";
            continue;
        }

        l += (l % 2);

        cout << l / 2 << " " << l / 2 << "\n";
    }

    return 0;
}
