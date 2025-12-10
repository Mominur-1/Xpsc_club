// https://codeforces.com/problemset/problem/1702/C

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
        map<int, int> first, last;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!first.count(x))
            {
                first[x] = i;
                last[x] = i;
            }
            else
            {
                last[x] = i;
            }
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if ((first.count(a) && last.count(b)) && first[a] <= last[b])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}