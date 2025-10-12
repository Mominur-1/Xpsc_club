#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_map<int, int> count;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            pq.push(x);
            count[x]++;
        }
        else if (type == 2)
        {
            if (pq.empty())
            {
                cout << "empty\n";
            }
            else
            {
                int minVal = pq.top();
                cout << minVal << "\n";
                count[minVal] = 0;
                while (!pq.empty() && count[pq.top()] == 0)
                {
                    pq.pop();
                }
            }
        }
    }

    return 0;
}