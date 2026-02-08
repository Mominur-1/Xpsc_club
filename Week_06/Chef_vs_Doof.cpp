// https://www.codechef.com/problems/CLLCM?tab=statement

#include <bits/stdc++.h>
using namespace std;


#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        bool possible = true;
        // odd + odd → LCM odd
        // even + even → LCM even
        // even + odd → LCM even
        while (n--)
        {
            int x;
            cin >> x;
            if (!(x%2))
            {
                possible = false;
            }
        }
        
        cout << ((possible)? "YES" : "NO") << "\n";
    }
    
    return 0;
}
