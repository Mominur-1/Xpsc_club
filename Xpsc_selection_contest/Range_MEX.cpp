#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        bool mex[4] = {false, false, false};

        for (int i = l; i <= r; i++)
        {
            mex[a[i]] = true;
        }

        for (int i = 0; i <= 2; i++)
        {
            if (!mex[i])
            {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}