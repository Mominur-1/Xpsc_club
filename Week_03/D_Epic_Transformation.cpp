// https://codeforces.com/problemset/problem/1506/D

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
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for (auto &it : mp)
        {
            pq.push({it.first, it.second});
        }

        while (pq.size() >= 2)
        {
            auto p = pq.top();
            pq.pop();
            auto q = pq.top();
            pq.pop();

            if (p.second > 1)
            {
                pq.push({p.first, p.second - 1});
            }
            if (q.second > 1)
            {
                pq.push({q.first, q.second - 1});
            }
        }

        int remaining = pq.empty() ? 0 : pq.top().second;
        cout << remaining << '\n';
    }

    return 0;
}