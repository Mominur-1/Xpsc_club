// https://codeforces.com/problemset/problem/1722/C

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
        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> ans(3 + 1);
        for (auto x : mp)
        {
            if (x.second.size() == 1)
            {
                ans[x.second[0]] += 3;
            }
            else if (x.second.size() == 2)
            {
                ans[x.second[0]]++;
                ans[x.second[1]]++;
            }
        }

        for (int i = 1; i <= 3; i++)
        {
            cout << ans[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}