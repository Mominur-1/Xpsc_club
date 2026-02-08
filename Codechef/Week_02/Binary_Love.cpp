// https://www.codechef.com/START209D/problems/P5209

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
        string s;
        cin >> n >> s;

        unordered_map<string, int> freq;
        for (int i = 0; i < n - 1; ++i)
        {
            string sub = s.substr(i, 2);
            freq[sub]++;
        }

        int c01 = freq["01"];
        int c10 = freq["10"];

        // cout << c01 << " " << c10 << "\n";

        if (c01 == c10 && c01 > 0)
        {
            cout << "Alice";
        }
        else
        {
            if (min(c01, c10)>0 && (min(c01, c10) % 2 == 1 || max(c01, c10) % 2 == 1))
            {
                cout << "Alice";
            }
            else
            {

                cout << "Bob";
            }
        }
        cout << '\n';
    }

    return 0;
}
