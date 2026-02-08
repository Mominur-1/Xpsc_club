// https://cses.fi/problemset/task/1640

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    

    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    long long sum;
    while (i < j)
    {
        sum = a[i].first + a[j].first;
        if (sum == x)
        {
            cout << ++a[i].second << " " << ++a[j].second;
            return 0;
        }
        else if (x > sum)
            i++;
        else
            j--;
    }

    cout << "IMPOSSIBLE";

    return 0;
}