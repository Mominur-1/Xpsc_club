// https://codeforces.com/problemset/problem/1927/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string S;
        cin >> S;
        int first = -1, last = -1;

        for (int i = 0; i < n; i++)
        {
            if (S[i] == 'B')
            {
                if (first < 0)
                {
                    first = i;
                    last = first;
                }
                else
                {
                    last = i;
                }
            }
        }

        cout << (last - first) + 1 << '\n';
    }

    return 0;
}