// https://www.codechef.com/START210D/problems/CHOCEAT

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
        int a, b;
        cin >> a >> b;

        cout << ((a == b) ? (a + b - 1) : (a + b)) << "\n";
    }

    return 0;
}