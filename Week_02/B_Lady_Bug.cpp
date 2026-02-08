// https://codeforces.com/problemset/problem/2092/B

#include <bits/stdc++.h>
using namespace std;

bool forward_tracking(string &a, string &b, int i, int n)
{
    int j = i + 1;
    while (j < n)
    {
        if (b[j] == '0')
        {
            swap(a[i], b[j]);
            return true;
        }
        else
        {
            j += 2;
        }
    }

    return false;
}

bool backtraking(string &a, string &b, int i)
{
    int j = i - 1;
    while (j >= 0)
    {
        if (b[j] == '0')
        {
            swap(a[i], b[j]);
            return true;
        }
        else
        {
            j -= 2;
        }
    }

    return false;
}

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
        string a, b;
        cin >> a >> b;

        
        bool crack = true;
        
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
            {
                continue;
            }
            else
            {
                if (backtraking(a, b, i))
                {
                    continue;
                }
                else
                {
                    if (!forward_tracking(a, b, i, n))
                    {
                        crack = false;
                        break;
                    }
                }
            }
        }

        cout << ((crack) ? "Yes" : "No") << '\n';
    }

    return 0;
}