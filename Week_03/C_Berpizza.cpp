// https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        if (a.second == b.second)
        {
            return a.first > b.first;
        }
        return a.second < b.second;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int serial = 1;
    queue<int> q;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    unordered_set<int> served;

    while (t--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            int m;
            cin >> m;
            q.push(serial);
            pq.push({serial, m});
            serial++;
        }
        else if (op == 2)
        {
            while (!q.empty() && served.count(q.front()))
            {
                q.pop();
            }
            if (!q.empty())
            {
                cout << q.front() << " ";
                served.insert(q.front());
                q.pop();
            }
        }
        else
        {
            while (!pq.empty() && served.count(pq.top().first))
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                cout << pq.top().first << " ";
                served.insert(pq.top().first);
                pq.pop();
            }
        }
    }

    cout << "\n";
    return 0;
}
