// https://codeforces.com/problemset/problem/1547/C
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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n), b(m);
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        vector<int> ans;
        int i = 0, j = 0;
        bool possible = true;

        while (i < n || j < m)
        {
            if (i < n && a[i] <= k)
            {
                if (a[i] == 0)
                {
                    k++;
                }
                ans.push_back(a[i]);
                i++;
            }
            else if (j < m && b[j] <= k)
            {
                if (b[j] == 0)
                {
                    k++;
                }

                ans.push_back(b[j]);
                j++;
            }
            else
            {
                possible = false;
                break;
            }
        }

        if (!possible)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int x : ans)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
