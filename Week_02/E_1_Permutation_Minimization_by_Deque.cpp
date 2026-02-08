// https://codeforces.com/problemset/problem/1579/E1

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
        deque<int> dq;
        vector<int> p(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            if (dq.empty())
            {
                dq.push_front(p[i]);
            }
            else if (dq.front() > p[i])
            {
                dq.push_front(p[i]);
            }
            else
            {
                dq.push_back(p[i]);
            }
        }

        for (int x : dq)
        {
            cout << x << " ";
        }
        cout << '\n';
        
    }

    return 0;
}