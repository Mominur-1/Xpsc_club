// https://codeforces.com/problemset/problem/44/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<pair<string, string>, bool> uniq_leaves;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        uniq_leaves[{a, b}] = true;
    }

    int T_leaves = 0;

    for (auto x : uniq_leaves )
    {
        T_leaves += x.second;
    }
    
    cout << T_leaves;

    return 0;
}