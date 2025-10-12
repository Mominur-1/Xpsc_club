// // https://codeforces.com/problemset/problem/862/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, ans = 0;
    cin >> n >> x;
    vector<int> set(x, 0);

    while (n--)
    {
        int a;
        cin >> a;
        if (a < x)
        {
            set[a] ++;
        }
        ans += (a==x);
    }

    for (int i = 0; i < x; ++i)
    {
        ans += !set[i];
    }
    
    cout << ans;
    
    return 0;
}