// https://open.kattis.com/problems/lastfactorialdigit

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    
    return fact(n-1) * n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        cout << (fact(n) % 10) << "\n";
    }
    
    
    return 0;
}