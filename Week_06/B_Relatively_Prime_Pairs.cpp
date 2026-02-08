// https://codeforces.com/problemset/problem/1051/B

#include <bits/stdc++.h>
using namespace std;


#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fastio;
    long long l, r;
    cin >> l >> r;
    cout << "YES" << "\n";
    for (long long i = l; i < r; i+=2)
    {
        cout << i << " " << i+1 << "\n"; //This works because every pair is (l,l+1) and gcd(l,l+1) always 1.
    }
    
    return 0;
}