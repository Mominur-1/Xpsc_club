// https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n - 1; ++i)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << ((n * (n + 1) / 2) - sum);

    return 0;
}