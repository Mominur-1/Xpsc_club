// https://www.codechef.com/problems/LCM_GCD?tab=statement

#include <bits/stdc++.h>
using namespace std;

#define LCM(a, b) ((a) / gcd(a, b) * (b))

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;

        cout << LCM(a, a) - gcd(b, a) << "\n";
    }

    return 0;
}