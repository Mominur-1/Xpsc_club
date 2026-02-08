// https://cses.fi/problemset/task/1661

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x, cnt = 0;
    cin >> n >> x;

    vector<long long> prefix(n);
    cin >> prefix[0];
    for (int i = 1; i < n; i++)
    {
        cin >> prefix[i];
        prefix[i] += prefix[i - 1];
    }

    map<long long, long long> freq;
    for (int i = 0; i < n; i++)
    {
        if (prefix[i] == x)
            cnt++;
        cnt += freq[prefix[i]-x];
        freq[prefix[i]]++;
    }

    cout << cnt;

    return 0;
}