// https://codeforces.com/problemset/problem/2117/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, seg = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int> excited, relax;

        for (int x : a)
        {
            excited.insert(x);
            relax.insert(x);

            if (excited.size() == relax.size())
            {
                seg ++;
                relax.clear();
            }
        }
        
        cout << seg << "\n";
        
    }
    
    return 0;
}