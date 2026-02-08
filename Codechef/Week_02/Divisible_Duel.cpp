// https://www.codechef.com/START209D/problems/P2209

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
        int x, y;
        cin >> x >> y;

        int S_even = 0, S_odd = 0;

        for (int i = x; i <= y; i++)
        {
            if (i % x == 0)
            {
                if (i % 2)
                {
                    S_odd++;
                }
                else
                {
                    S_even++;
                }
            }
        }

        cout << ((S_even >= S_odd) ? "YES" : "NO") << '\n';
    }

    return 0;
}