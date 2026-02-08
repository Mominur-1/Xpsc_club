// https://www.codechef.com/problems/CODETOWN

#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define yy cout << "YES" << "\n"
#define nn cout << "NO" << "\n"
#define yn(found) cout << ((found) ? "YES" : "NO") << "\n"
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

bool isVowels(char ch)
{
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
int main()
{
    fastio;
    wh(tc)
    {
        string S;
        cin >> S;

        bool possible = 1;
        for (int i = 0; i < 8; i++)
        {
            if (isVowels(S[i]) ^ (i == 1 || i == 3 || i == 5))
            {
                possible = 0;
                break;
            }
        }

        yn(possible);
    }
    return 0;
}