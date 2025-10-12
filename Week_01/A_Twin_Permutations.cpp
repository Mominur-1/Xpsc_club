// https://codeforces.com/problemset/problem/1831/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            // +1 beacuse ai start from 1 and n - a fullfill n-i == n -(i-1)
            cout << (n - a) + 1 << " ";
        }
        cout << "\n";
    }

    // but if reqire n-i < n -(i-1) i can't solve it in O(n). we need this method
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> a(n);
    //     vector<int> b(n);
    //     for (int i = 0; i < n; ++i)
    //     {
    //         cin >> a[i];
    //     }

    //     b = a;
    //     sort(b.begin(), b.end());
    //     for (int i = n - 1; i > 0; --i)
    //     {
    //         int j = i - 1;
    //         while (a[i] + b[i] < a[i - 1] + b[i - 1])
    //         {
    //             swap(b[j], b[j - 1]);
    //         }
    //     }

    //     for (auto x : b)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}