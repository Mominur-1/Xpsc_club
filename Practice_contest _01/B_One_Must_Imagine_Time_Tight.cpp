// https://vjudge.net/contest/757589#problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, n= 2;
    cin >> a;
    int m = a;
    
    while (n--)
    {
        cin >> a;
        m = min (m, a);
    }
    
    cout << m;
    
    return 0;
}