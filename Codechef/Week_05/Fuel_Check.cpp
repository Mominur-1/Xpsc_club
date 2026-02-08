// https://www.codechef.com/START211D/problems/FUELCHK

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, Y;
    cin >> X >> Y;

    cout << (((X*Y) >= 100)? "YES" : "NO");
    
    return 0;
}