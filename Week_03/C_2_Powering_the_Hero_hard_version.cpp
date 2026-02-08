// https://codeforces.com/problemset/problem/1800/C2

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
        priority_queue<int> bonus_deck;
        long long hero_p = 0;

        while (n--)
        {
            int s;
            cin >> s;
            if (s > 0)
            {
                bonus_deck.push(s);
            }
            else if (!bonus_deck.empty())
            {
                hero_p += bonus_deck.top();
                bonus_deck.pop();
            }
        }
        cout << hero_p << "\n";
    }

    return 0;
}
