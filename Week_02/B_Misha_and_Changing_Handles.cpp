// https://codeforces.com/problemset/problem/501/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<string, string> Orgi, curr;

    while (q--)
    {
        string Old, New;
        cin >> Old >> New;

        if (curr.find(Old) != curr.end())
        {
            Orgi[curr[Old]] = New;
            curr[New] = curr[Old];
            curr.erase(Old);
        }
        else
        {
            Orgi[Old] = New;
            curr[New] = Old;
        }
    }

    cout << Orgi.size() << '\n';

    for (auto x : Orgi)
    {
        cout << x.first << " " << x.second << '\n';
    }

    return 0;
}