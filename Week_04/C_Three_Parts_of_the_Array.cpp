// https://codeforces.com/problemset/problem/1006/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    for (auto &x : a) cin >> x;

    int i = 0, j = n - 1;
    long long sum1 = 0, sum2 = 0, max_sum = 0;
    while (i <= j)
    {

        if (sum1 <= sum2) sum1 += a[i++];
        else sum2 += a[j--];

        if (sum1 == sum2) max_sum = sum1;
        
    }

    cout << max_sum;

    return 0;
}