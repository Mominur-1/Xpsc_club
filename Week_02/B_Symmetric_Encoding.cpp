// https://codeforces.com/problemset/problem/1974/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    
    // t complex = O(t*n*26)
    while (t--)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;

        vector<char> cnt(26);
        // t compelx = O(n)
        for (char ch : b)
        {
            cnt[ch - 'a'] = 1;
        }

        string r;
        // t compelx = O(26)
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i])
            {
                r += 'a' + i;
            }
        }
        
        string S;
        // t compelx = O(n*26)
        // t compelx = O(n)
        for (char ch : b)
        {
            // t compelx = O(x) ; x <=26
            for (int i = 0; i < r.size(); i++)
            {
                if (ch == r[i])
                {
                    S += r[r.size() - 1 - i];
                }
            }
        }

        cout << S << '\n';
    }

    return 0;
}