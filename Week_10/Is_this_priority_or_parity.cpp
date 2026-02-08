// https://www.codechef.com/problems/ISPAR

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

int main()
{
    fastio;
    wh(tc)
    {
        ll n, k;
        cin >> n >> k;

        ll last_element;
        if (k==1)
        {
            last_element = n;
        }
        else if (k==2)
        {
            last_element = 1;
        }
        else
        {
            last_element = 2;
        }
        
        cout << ((last_element&1)? "ODD" : "EVEN") << "\n";
    }
    return 0;
}