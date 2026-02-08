// https://www.codechef.com/problems/SKMP

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
        string S, P, mid, l;
        cin >> S >> P;

        vi freq(26, 0);
        for (char c : S)
            freq[c - 'a']++;
        for (char c : P)
            freq[c - 'a']--;

        for (int i = 0; i < 26; i++)
        {
            if ((i + 'a') < P[0])
            {
                for (int j = 0; j < freq[i]; j++)
                {
                    cout << char(i+'a');
                }
                
            }
            else if ((i + 'a') == P[0])
            {
                mid += string(freq[i], (i + 'a'));
            }
            else
            {
                l += string(freq[i], (i + 'a'));
            }
        }

        cout << (((mid+P) < (P+mid))? (mid+P) : (P+mid)) << l << "\n";
    }
    return 0;
}