// https://codeforces.com/problemset/problem/1792/A

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
        int n;
        cin >> n;
        vector <int> monster(n);
        int cout_one = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> monster[i];
            if (monster[i] == 1)
            {
                cout_one ++;
            }
        }
        int result = n - (cout_one/2);

        cout << result << "\n";
    }
    
    
    return 0;
}