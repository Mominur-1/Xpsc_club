// https://www.codechef.com/START210D/problems/PROFIT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;
        if (X > N)
        {
            cout << 0 << "\n";
            continue;
        }
        int rejact_l = X - 1;
        int totall_recieve = (N * (N + 1) / 2) - (rejact_l * (rejact_l + 1) / 2);

        cout << totall_recieve - X * (N - rejact_l) << '\n';
    }
    return 0;
}