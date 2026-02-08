// https://www.codechef.com/problems/FAKEGCD

#include <bits/stdc++.h>
using namespace std;


#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    
    return 0;
}