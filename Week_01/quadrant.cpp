// https://open.kattis.com/problems/quadrant

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;

    if (y > 0)
    {
        cout << ((x > 0) ? 1 : 2);
    }
    else
    {
        cout << ((x > 0) ? 4 : 3);
    }

    return 0;
}