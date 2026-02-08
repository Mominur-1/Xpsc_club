// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;
    long long ans = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            int curr = a[i];
            long long cnt1 = 0, cnt2 = 0;

            while (i < n && a[i] == curr)
            {
                cnt1++;
                i++;
            }

            while (j < m && b[j] == curr)
            {
                cnt2++;
                j++;
            }

            ans += cnt1 * cnt2;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << ans;
    return 0;
}
