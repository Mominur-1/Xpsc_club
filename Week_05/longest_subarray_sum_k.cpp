// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> prefix_sum[i];
        prefix_sum[i] += prefix_sum[i - 1];
    }

    unordered_map<long long, int> mp;
    mp[prefix_sum[0]] = 0;
    int mx_subarray_len = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(prefix_sum[i]) == mp.end())
            mp[prefix_sum[i]] = i;

        long long need = prefix_sum[i] - k;
        if (mp.find(need) != mp.end())
        {
            mx_subarray_len = max(mx_subarray_len, i - mp[need]);
        }
    }

    cout << mx_subarray_len;

    return 0;
}