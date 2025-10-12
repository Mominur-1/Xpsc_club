// https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int S, T, combination = 0;
    cin >> S >> T;

    for (int i = 0; i <= S; ++i)
    {
       for (int j = 0; j <= S - i; ++j)
       {
        for (int k = 0; k <= S - i - j; ++k)
        {
            if ((i*j*k <= T))
            {
                combination ++;
            } 
        }
       }  
    }

    cout << combination;
    
    
    return 0;
}