// https://codeforces.com/problemset/problem/1997/A

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
        string S;
        cin >> S;

        for (int i = 1; i < S.size(); i++)
        {
            if (S[i] == S[i - 1])
            {
                if (S[i] != 'a')
                {
                    S.insert(i, 1, 'a');
                }
                else
                {
                    S.insert(i, 1, 'b');
                }
                break;
            }
        }

        if (S.size() == 1)
        {

            if (S[0] != 'a')
            {
                S += 'a';
            }
            else
            {
                S += 'b';
            }
        }

        cout << S << '\n';
    }

    return 0;
}
