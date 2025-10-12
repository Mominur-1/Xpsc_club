#include <bits/stdc++.h>
using namespace std;

const int N = 200005;

vector<vector<int>> adj_list;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    adj_list.resize(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int u, v;
        cin >> u >> v;
    }

    return 0;
}