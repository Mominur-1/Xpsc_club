// https://open.kattis.com/problems/autori

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin >> S;

    for (char x : S)
    {
        if(x >='A' && x <= 'Z')
        {
            cout << x;
        }
    }
    
    
    return 0;
}