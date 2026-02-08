// https://judge.yosupo.jp/problem/double_ended_priority_queue

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >>  N >> Q;
    multiset<int> S;
    while (N--)
    {
        int x;
        cin >> x;
        S.insert(x);
    }
    
    while (Q--)
    {
        int q;
        cin >> q;

        if (!q)
        {
            int x;
            cin >> x;
            S.insert(x);
        }
        else if (q == 1)
        {
            
            auto it = S.begin();
            cout << *it << "\n";
            S.erase(it);
        }
        else
        {
            auto it = --S.end();
            cout << *it << "\n";
            S.erase(it);
        }
    }
    
    return 0;
}