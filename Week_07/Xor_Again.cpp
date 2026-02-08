// https://www.codechef.com/problems/XORAGN

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
        long long N;
        cin >> N;

        long long xr = 0;
        int a;
        //because (a1+a1)^(a1+a2)^(a2+a1)^(a2+a2) = (a1+a1)^(a2+a2) = (a1<<1)^(a2<<1)=(a1^a2)<<1
        while (N--)
        {
            cin >> a;
            xr ^= a;
        }

        cout << (xr << 1) << "\n";
    }
    return 0;
}
