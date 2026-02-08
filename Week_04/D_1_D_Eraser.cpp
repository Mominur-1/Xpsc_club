// https://codeforces.com/problemset/problem/1873/D

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
        int n, k, B_segmentend=-1, mini_operation = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            if (x=='B')
            {
                if (i >= B_segmentend)
                {
                    mini_operation ++;
                    B_segmentend = i + k;
                }
                
            }
            
        }

        cout << mini_operation << "\n";
    }
    
    return 0;
}