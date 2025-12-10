// https://codeforces.com/problemset/problem/1165/B

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);
    int day = 1;
    for (int x : a)
    {
        if (x >= day)
        {
            day++;
        }
    }
    cout << day - 1 << "\n";
    return 0;
}
