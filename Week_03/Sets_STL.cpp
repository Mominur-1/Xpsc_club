// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;
    set<int> S;
    while (Q--)
    {
        int y, x;
        cin >> y >> x;
        if (y==1)
        {
            S.insert(x);
        }
        else if (y==2)
        {
            S.erase(x);
        }
        else
        {
            cout << ((S.find(x) == S.end())? "No" : "Yes") << "\n";
        }
        
    }
    
    return 0;
}