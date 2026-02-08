// https://cses.fi/problemset/task/2162

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> q;
    for (int i = 1; i <= n; i++)
        q.push(i);

    vector<int> result;
    while (!q.empty())
    {
        q.push(q.front());
        q.pop();

        if (!q.empty())
        {
            result.push_back(q.front());
            q.pop();
        }
    }

    for (int x : result)
        cout << x << " ";
}
