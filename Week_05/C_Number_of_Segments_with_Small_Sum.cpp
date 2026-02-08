// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long S;
    cin >> n >> S;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    long long sum = 0, cnt = 0;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum > S)
        {
            sum -= a[l];
            l++;
        }
        cnt += (i - l + 1);
    }

    cout << cnt << "\n";
    return 0;
}