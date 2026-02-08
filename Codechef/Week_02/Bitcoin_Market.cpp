// https://www.codechef.com/START209D/problems/P1209

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string R;
    cin >> R;

    cout <<((stoi(R) <= 4) ? "YES" : "NO");
    
    return 0;
}