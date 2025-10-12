// https://www.codechef.com/problems/P1149

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, k;
    cin >> x >> y >> k;

    cout << (( abs( abs(x) - y) <=  k)? "Yes" : "No");
    
    return 0;
}