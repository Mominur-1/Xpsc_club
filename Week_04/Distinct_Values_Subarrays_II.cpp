// https://cses.fi/problemset/task/2428

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    unordered_map<int, int> freq;
    vector<int> window;
    int l = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        window.push_back(x);
        freq[x]++;

        while (freq.size() > k)
        {
            freq[window[l]]--;

            if (freq[window[l]] == 0)
                freq.erase(window[l]);

            l++;
        }

        ans += i - l + 1;  // Number of subarrays ending at index i.
    }

    cout << ans << "\n";
    return 0;
}
