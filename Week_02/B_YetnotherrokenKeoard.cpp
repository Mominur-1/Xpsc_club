// https://codeforces.com/problemset/problem/1907/B

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
        stack<char> result;
        reverse(S.begin(), S.end());
        int upper = 0, lower = 0;

        for (auto ch : S)
        {
            if (ch == 'B')
            {
                upper++;
            }
            else if (ch == 'b')
            {
                lower++;
            }
            else
            {
                if (ch >= 'A' && ch <= 'Z')
                {
                    if (upper)
                    {
                        upper--;
                    }
                    else
                    {
                        result.push(ch);
                    }
                }
                else if (ch >= 'a' && ch <= 'z')
                {
                    if (lower)
                    {
                        lower--;
                    }
                    else
                    {
                        result.push(ch);
                    }
                }
            }
        }

        while (!result.empty())
        {
            cout << result.top();
            result.pop();
        }
        cout << '\n';
    }

    return 0;
}