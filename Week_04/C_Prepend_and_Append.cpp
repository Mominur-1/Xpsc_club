// https://codeforces.com/problemset/problem/1791/C

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
        int l=0, r=n-1;
        string S;
        cin >> S;

        while (l < r)
        {
            if ((S[l]=='0' && S[r]=='1') || (S[l]=='1' && S[r]=='0'))
            {
                l++, r--;
            }
            else
            {
                break;
            } 
        }
        
        cout << (r-l+1) << "\n";
    }
    
    return 0;
}