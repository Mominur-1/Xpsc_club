// https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<char> count (26, 0);
    string S;
    cin >> S;

    for (char x : S)
    {
        count[x - 'a'] ++;
    }
    
    for (int i = 0; i < 26; ++i)
    {
        if (!count[i])
        {
            cout << char(i + 'a');
            return 0;
        }
    }
    
    cout << "None" ;
    
    return 0;
}