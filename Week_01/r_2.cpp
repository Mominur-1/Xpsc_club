// https://open.kattis.com/problems/r2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int R1, R2, S;
    cin >> R1 >> S;

    cout << (R2 = 2*S-R1);
    
    return 0;
}