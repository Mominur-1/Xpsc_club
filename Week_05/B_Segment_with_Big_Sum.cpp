// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long sum = 0;
    int l = 0, min_len = n + 1;

    for (int r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum >= s)
        {
            min_len = min(min_len, r - l + 1);
            sum -= a[l];
            l++;
        }
    }

    cout << (min_len == n + 1 ? -1 : min_len) << "\n";

    return 0;
}
