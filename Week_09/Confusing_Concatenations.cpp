// https://www.codechef.com/problems/CONFCAT

#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define yy cout << "YES" << "\n"
#define nn cout << "NO" << "\n"
#define yn cout << ((found) ? "YES" : "NO") << "\n"
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define si set<int>
#define pb push_back
#define mapii map<int, int>
#define mapci map<char, int>
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define wh(tc) \
    int tc;    \
    cin >> tc; \
    while (tc--)

int main()
{
    fastio;
    wh(tc)
    {
        int n;
        cin >> n;
        vi c(n);

        int split_idx = -1;
        cin >> c[0];
        int x = c[0];
        for (int i = 1; i < n; i++)
        {
            cin >> c[i];
            if (split_idx == -1 && c[0] < c[i])
            {
                split_idx = i;
            }
        }
        
        cout << split_idx << "\n";
        if (split_idx==-1)
        {
            continue;
        }
        
        for (int i = 0; i < split_idx; i++)
        {
            cout << c[i] << " ";
        }
        cout << "\n";
        
        cout << (n-split_idx) << "\n";
        for (int i = split_idx; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << "\n";
        
    }
    return 0;
}