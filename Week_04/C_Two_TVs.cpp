// https://codeforces.com/problemset/problem/845/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> d;

    while (n--)
    {
        int l, r;
        cin >> l >> r;
        d[l] ++;
        d[r+1] --;
    }
    
    bool flag = true;
    long long sum = 0;

    for (auto [key, value] : d)
    {
        sum += value;
        if (sum > 2)
        {
            flag = false;
            break;
        }
    }
    
    cout << ((flag)? "YES" : "NO");

    return 0;
}