// https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << n;
        return 0;
    }

    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    vector<int> odd;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            odd.push_back(i);
        else
            cout << i << " ";
    }

    for (int x : odd)
    {
        cout << x << " ";
    }

    return 0;
}