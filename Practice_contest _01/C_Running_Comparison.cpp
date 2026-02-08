// https://www.codechef.com/problems/RUNCOMPARE

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
        int happy = 0;
        int n;
        cin >> n;
        vector<int> Alice(n);
        vector<int> Bob(n);

        for (int i = 0; i < n; i++)
        {
            cin >> Alice[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> Bob[i];
        }

        for (int i = 0; i < n; i++)
        {
            if ((Alice[i] <= 2 * Bob[i]) && (Bob[i] <= 2 * Alice[i]))
            {
                happy++;
            }
        }

        cout << happy << '\n';
    }

    return 0;
}