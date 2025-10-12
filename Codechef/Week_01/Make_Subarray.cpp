// https://www.codechef.com/START207D/problems/MAKESUB

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int n, count = 0;
        string S;
        cin >> n >> S;

        int f_idx = -1, l_idx = -1;
        for (int i = 0; i < n; ++i)
        {
            if (S[i] == '1')
            {
                if (f_idx == -1)
                {
                    f_idx = i;
                }
                else
                {
                    l_idx = i;
                }
            }
        }

        if (f_idx==-1 || l_idx==-1)
        {
            cout << 0 << "\n";
            continue;
        }

        int white = 0;
        
        for (int i = f_idx + 1; i < l_idx; ++i)
        {
            if (S[i] == '0')
            {
                white ++;
            }
            
        }
        
        cout << white << "\n";
    }
    
    
    return 0;
}