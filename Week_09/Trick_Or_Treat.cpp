// https://www.codechef.com/problems/TREATS

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

int main()
{
    fastio;
    wh(tc)
    {
        int n, m;
        cin >> n >> m;
        vi a(n), b(n);

        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        // if (x+y)%m==0, then (x%m)+(y%m)==m
        vi freq(m, 0);
        for (int i = 0; i < n; i++)
        {
            freq[(a[i]%m)] ++;
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            // use last in line % m to handle b[i] % m = 0
            ans += freq[(m-(b[i]%m))%m];
        }
        
        cout << ans << "\n";
    }
    return 0;
}