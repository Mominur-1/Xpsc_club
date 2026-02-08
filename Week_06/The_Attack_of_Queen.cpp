// https://www.codechef.com/problems/QUEENATTACK

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        long long N, X, Y;
        cin >> N >> X >> Y;

        long long h = N - 1;
        long long v = N - 1;

        long long d =
            min(X - 1, Y - 1) +
            min(X - 1, N - Y) +
            min(N - X, Y - 1) +
            min(N - X, N - Y);

        cout << (h + v + d) << "\n";
    }

    return 0;
}