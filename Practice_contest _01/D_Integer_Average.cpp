// https://vjudge.net/contest/757589#problem/D

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
        int n;
        cin >> n;
        vector<int> a(n);
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            (a[i] % 2) ? odd++ : even++;
        }

        bool found = false;

        if (odd >= 2 || even >= 2)
        {
            found = true;
        }

        cout << (found ? "Yes" : "No") << "\n";
    }

    return 0;
}
