// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<priority_queue<int>> Q(n);

    while (q--)
    {
        int op, t;
        cin >> op >> t;
        if (op)
        {
            if (!Q[t].empty())
            {
                if (op == 1)
                {
                    cout << Q[t].top() << "\n";
                }
                else
                {
                    Q[t].pop();
                }
            }
        }
        else
        {
            int  x;
            cin >> x;
            Q[t].push(x);
        }
    }
    

    return 0;
}