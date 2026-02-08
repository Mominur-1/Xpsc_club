// https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s = 0, d = 0;
    cin >> n;

    deque<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            if (cards.front() > cards.back())
            {
                d += cards.front();
                cards.pop_front();
            }
            else
            {
                d += cards.back();
                cards.pop_back();
            }
        }
        else
        {
            if (cards.front() > cards.back())
            {
                s += cards.front();
                cards.pop_front();
            }
            else
            {
                s += cards.back();
                cards.pop_back();
            }
        }
    }

    cout << s << " " << d;

    return 0;
}