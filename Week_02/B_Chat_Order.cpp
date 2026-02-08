// https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<string> messages;
    map<string, int> duplicate;

    for (int i = 0; i < n; i++)
    {
        string S;
        cin >> S;
        messages.push(S);
    }

    for (int i = 0; i < n; i++)
    {
        string x = messages.top();
        messages.pop();
        if (!duplicate[x])
        {
            cout << x << '\n';
            duplicate[x] ++;
        }
    }

    return 0;
}