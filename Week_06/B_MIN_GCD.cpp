// https://codeforces.com/problemset/problem/2084/B

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (long long &x : a) cin >> x;

        int min_idx = min_element(a.begin(), a.end()) - a.begin();
        long long g = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != min_idx && !(a[i] % a[min_idx]))
                g = gcd(g, a[i]);
        }
        cout << ((a[min_idx] == g) ? "Yes" : "No") << "\n";
    }
    return 0;
}
