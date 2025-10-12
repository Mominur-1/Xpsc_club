// https://open.kattis.com/problems/hissingmicrophone

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin >> S;

    char y ='!';

    for (char x : S)
    {
        if (x==y && (x=='s' || x=='S'))
        {
            cout << "hiss";
            return 0;
        }
        y = x;
    } 
    cout << "no hiss";

    return 0;
}