// https://codeforces.com/problemset/problem/1714/B

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
        unordered_map<int, int> distinc;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int lr_idx = -1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (distinc[a[i]])
            {
                lr_idx = i;
                break;
            }
            distinc[a[i]]++;
        }

        cout << lr_idx + 1 << '\n';
    }

    return 0;
}