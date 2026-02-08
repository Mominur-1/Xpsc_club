// https://codeforces.com/problemset/problem/762/A

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    long long n;
    int k;
    cin >> n >> k;
    vector<long long> divisor;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (!(n%i))
        {
            divisor.push_back(i);

            if ((n/i) != i) divisor.push_back(n / i);
        }
    }

    sort(divisor.begin(), divisor.end());

    cout << ((divisor.size() < k) ? -1 : divisor[k - 1]);

    return 0;
}