// https://codeforces.com/problemset/problem/1722/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                cnt += i;
            }
            else
            {
                cnt += (n - i - 1);
            }
        }

        int l = 0, r = n - 1, m = (n - 1) / 2;
        vector<long long> result;
        result.push_back(cnt); // because handle result.size (if result is empty)
        while (l <= m && r > m)
        {
            if (s[l] == 'L')
            {
                cnt += (n - l - 1) - l;
                result.push_back(cnt);
            }
            if (s[r] == 'R')
            {
                cnt += r - (n - r - 1);
                result.push_back(cnt);
            }
            l++, r--;
        }

        // because this line "result.push_back(cnt);"" no need to this logic
        // if (result.empty())
        // {
        //     // If no improvements, output initial value for all k
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << cnt << " ";
        //     }
        // }

        // because 0-based index skiping
        for (int i = 1; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }

        // Fill remaining k-values with the maximum achieved value after all beneficial flips
        //result.size() returns a value of type size_t, which is unsigned.
        for (int i = 1; i <= n - (result.size() - 1); i++)
        {
            cout << result.back() << " "; 
        }

        cout << '\n';
    }

    return 0;
}