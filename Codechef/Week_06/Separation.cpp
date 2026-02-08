// https://www.codechef.com/START213D/problems/SEPX

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
        int n;
        long long x;
        cin >> n >> x;
        bool cntG = false, cntL = false, cntE = false;

        while (n--)
        {
            long long v;
            cin >> v;
            if (v > x)
                cntG = true;
            else if (v < x)
                cntL = true;
            else
                cntE = true;
        }

        cout << (((cntG && cntL) && !cntE) ? "No" : "Yes") << "\n";
    
    }

    return 0;
}