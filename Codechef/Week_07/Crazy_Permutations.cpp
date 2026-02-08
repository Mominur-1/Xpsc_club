// https://www.codechef.com/START214D/problems/P2HOME

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
        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;
        
        for (int &x : b) cin >> x;
        

        bool a_inc = true, b_inc = true;
        bool possible = true;

        for (int i = 0; i < n - 1; i++)
        {
            a_inc = (a[i] < a[i+1]);
            b_inc = (b[i] < b[i+1]);

            if (a_inc != b_inc || b[i]==a[i+1])
            {
                possible = false;
                break;
            }
        }

        cout << ((possible) ? "Yes" : "No") << "\n";
    }
    return 0;
}
