// https://www.codechef.com/START209D/problems/P3209

#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> players;

        for (int i = 1; i <= n; ++i)
        {
            int score = 1;
            for (int j = 1; j <= i; j++)
            {
                if (i%j == 0 && n%j == 0)
                {
                    score = j;
                } 
            }
            
            players.push_back({score, i});
        }

        sort(players.begin(), players.end(), cmp);

        for (auto p : players)
        {
            cout << p.second << " ";
        }
        cout << "\n";
    }

    return 0;
}
