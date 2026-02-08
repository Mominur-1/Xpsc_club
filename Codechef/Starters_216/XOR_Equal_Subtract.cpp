#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define yy cout<<"YES"<<"\n"
#define nn cout<<"NO"<<"\n"
#define yn cout<< ((found)?"YES":"NO")<<"\n"
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define si set<int>
#define pb push_back
#define mapii map<int,int>
#define mapci map<char,int>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define wh(tc) int tc; cin>>tc; while(tc--)

bool good(ll x, ll y) 
{
    return ((x & y) == x) || ((x & y) == y);
}
int main()
{
    fastio;

    wh (T) 
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (ll &x : a) cin >> x;

        sort(a.begin(), a.end());

        set<pair<ll, ll>> p;
        int ans = 1;

        f0(i,n-1)
        {
            for (int j = i; j < n; j++)
            {
                if (good(a[i], a[j]))
                {
                    p.insert({a[i], a[j]});
                }
            }
            
        }

        cout << p.size() << "\n";
    }
}
