// https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> suffix(n);
    unordered_set<int> track;

    for (int i = n - 1; i >= 0; i--)
    {
        track.insert(a[i]);
        suffix[i] = track.size();
    }

    while (m--)
    {
        int l;
        cin >> l;
        cout << suffix[l - 1] << '\n';
    }

    return 0;
}
