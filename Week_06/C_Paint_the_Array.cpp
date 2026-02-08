// https://codeforces.com/problemset/problem/1618/C

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
        vector <long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        

        long long g1=0, g2=0;
        bool beautiful = true;
        
        for (int i = 0; i < n; i++)
        {
            if (!(i%2)) g1 = __gcd(g1, a[i]);
            else g2 = __gcd(g2, a[i]);
        }
        
        bool ok1 = true, ok2 = true;
        for (int i = 0; i < n; i++)
        {
            if (!(i%2))
            {
                if (!(a[i] % g2)) ok2 = false;
            }
            else
            {
                if (!(a[i] % g1)) ok1 = false;
            }
            
        }

        if (ok1) cout << g1;
        else if(ok2) cout << g2;
        else cout << 0;

        cout << "\n";
    }
    
    return 0;
}