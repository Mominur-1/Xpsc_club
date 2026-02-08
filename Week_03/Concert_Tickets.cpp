// https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    multiset<int> tickets;

    while (n--)
    {
        int x;
        cin >> x;
        tickets.insert(x);
    }

    while (m--)
    {
        int x;
        cin >> x;

        auto it = tickets.upper_bound(x);
        if (it == tickets.begin())
        {
            cout << -1;
        }
        else
        {
            it--;
            cout << *it;
            tickets.erase(it);
        }
        cout << "\n";
    }

    return 0;
}