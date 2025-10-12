// https://vjudge.net/contest/753864#problem/T

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    while (n--)
    {
        int x, y;
        cin >> x >> y;

        if (x > y)
        {
            cout << '>';
        }
        else if (x < y)
        {
            cout << '<';
        }
        else
        {
            cout << '=';
        }

        cout << '\n';
    }

    return 0;
}