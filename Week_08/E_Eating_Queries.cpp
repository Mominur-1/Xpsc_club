// https://codeforces.com/problemset/problem/1676/E

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
        int n, q;
        cin >> n >> q;
        vi v(n);
        for(auto &x: v) cin >> x;
        sort(v.begin(), v.end(), greater<int>());

        vll ans(n);
        ans[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            ans[i] = ans[i-1] + v[i];
        }

        while (q--)
        {
            int x;
            cin >> x;

            auto k = lower_bound(ans.begin(), ans.end(), x);
            
            cout << ((k==ans.end()) ? -1 : k-ans.begin()+1) << "\n";
        }
        
        
    }
    return 0;
}