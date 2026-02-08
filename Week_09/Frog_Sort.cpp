// https://www.codechef.com/problems/FROGS

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

class Frog
{
public:
    int W, pos, L;
};

class cmp
{
public:
    bool operator()(const Frog &a, const Frog &b) const
    {
        return a.W < b.W;
    }
};

int main()
{
    fastio;
    wh(tc)
    {
        int n;
        cin >> n;

        vector<Frog> frogs(n);

        f0(i, n)
        {
            cin >> frogs[i].W;
            frogs[i].pos = i + 1;
        }

        f0(i, n)
        {
            cin >> frogs[i].L;
        }

        sort(frogs.begin(), frogs.end(), cmp());

        int totall_hits = 0;
        for (int i = 1; i < n; i++)
        {
            if (frogs[i].pos <= frogs[i - 1].pos)
            {

                int x = ((frogs[i - 1].pos - frogs[i].pos) / frogs[i].L) + 1;
                frogs[i].pos += x * frogs[i].L;

                totall_hits += x;
            }
        }

        cout << totall_hits << "\n";
    }
    return 0;
}