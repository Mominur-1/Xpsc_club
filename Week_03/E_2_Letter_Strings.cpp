// https://codeforces.com/problemset/problem/1669/E

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

        // 2D array to store count of each 2-letter string combination
        int count[11][11] = {0};
        long long pairs = 0;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            int first = s[0] - 'a';
            int second = s[1] - 'a';

            for (char c = 'a'; c <= 'k'; c++)
            {
                // Check all strings with same first letter but different second letter
                if (c != s[0])
                {
                    pairs += count[c - 'a'][second];
                }

                // Check all strings with same second letter but different first letter
                if (c != s[1] )
                {
                    pairs += count[first][c - 'a'];
                }
            }
            // Remember we've seen this string for future comparisons
            count[first][second] ++;
        }

        cout << pairs << "\n";
    }

    return 0;
}
