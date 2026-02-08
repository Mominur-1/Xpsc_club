// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int idx = 0;
    while (m--)
    {
        int x;
        cin >> x;
        while (idx < n && x > a[idx])
        {
            idx++;
        }
        cout << idx << " ";
    }

    return 0;
}