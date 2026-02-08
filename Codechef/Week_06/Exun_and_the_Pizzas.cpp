// https://www.codechef.com/START213D/problems/EXUNPIZZA

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, r;
    cin >> n >> k >> r;

    cout << (n-k)*r;
    
    return 0;
}