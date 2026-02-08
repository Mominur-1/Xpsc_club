// https://cses.fi/problemset/task/1164

#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define yy cout << "YES" << "\n"
#define nn cout << "NO" << "\n"
#define yn cout << ((found) ? "YES" : "NO") << "\n"
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define si set<int>
#define pb push_back
#define mapii map<int, int>
#define mapci map<char, int>
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define wh(tc) \
    int tc;    \
    cin >> tc; \
    while (tc--)

int main()
{
    fastio;

    int n;
    cin >> n;
    int a[n];

    vector<tuple<int, int, int>> customers;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        customers.push_back({a, b, i});
    }

    sort(customers.begin(), customers.end());

    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        rooms_heap;

    vector<int> ans(n);
    int total_rooms = 0;

    for (auto [a, b, idx] : customers)
    {
        if (!rooms_heap.empty() && rooms_heap.top().first < a)
        {
            auto [end, available_room] = rooms_heap.top();
            rooms_heap.pop();
            ans[idx] = available_room;
            rooms_heap.push({b, available_room});
        }
        else
        {
            total_rooms++;
            ans[idx] = total_rooms;
            rooms_heap.push({b, total_rooms});
        }
    }

    cout << total_rooms << "\n";
    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}