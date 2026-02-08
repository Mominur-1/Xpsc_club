// https://www.codechef.com/problems/BINSTRING

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<char> st;
        for (char ch : s)
        {
            if (st.empty() || st.top() != ch)
                st.push(ch);
        }

        cout << st.size() << "\n";
    }


    return 0;
}