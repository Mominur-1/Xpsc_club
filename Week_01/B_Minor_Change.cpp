// https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S, T;
    cin >> S >> T;

    int l = S.size();
    int common = 0;

    for (int i = 0; i < l; i++)
    {
        if (S[i] == T[i])
        {
            common ++;
        }
    }

    cout << l - common;
    
    
    return 0;
}