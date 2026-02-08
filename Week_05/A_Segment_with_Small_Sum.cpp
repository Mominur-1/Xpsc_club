// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long S;
    cin >> n >> S;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long sum = 0;
    int ans = 0;
    int l = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        while (sum > S)
        {
            sum -= a[l];
            l++;
        }

        ans = max(ans, i - l + 1);
    }

    cout << ans;
    return 0;
}
