// https://www.codechef.com/START218D/problems/STOPCOUNT

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
        int N;
        cin >> N;

        string s;
        cin >> s;

        int favor = 0, against = 0;
        int win_count = 0;
        
        for (char ch : s)
        {
            if (ch == '1')
            {
                favor += 1;
            }
            else
                against += 1;

            win_count += ((favor > against) ? 1 : 0);
        }
        cout << win_count << "\n";
    }
    return 0;
}