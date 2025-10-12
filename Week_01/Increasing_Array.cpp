// https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long int min_moves = 0;
    cin >> n;
    vector<int> x(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (x[i] < x[i - 1])
        {
            min_moves += (x[i - 1] - x[i]);
            x[i] = x[i - 1];
        }
    }

    cout << min_moves;

    return 0;
}