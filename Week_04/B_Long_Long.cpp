// https://codeforces.com/problemset/problem/1843/B

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
        int n;
        cin >> n;
        long long max_sum = 0;
        int mini_operation = 0;
        bool minus_window = false;
        while (n--)
        {
            int x;
            cin >> x;

            if (x < 0)
            {
                x *= -1;
                if (!minus_window)
                {
                    mini_operation++;
                    minus_window = true;
                }
            }
            else if (x > 0)
            {
                minus_window = false;
            }

            max_sum += x;
        }

        cout << max_sum << " " << mini_operation << "\n";
    }

    return 0;
}