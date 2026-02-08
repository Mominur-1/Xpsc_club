// https://www.codechef.com/problems/PERMXORITY

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
        int n;
        cin >> n;
        if (n <= 2)
        {
            cout << "-1" << "\n";
            continue;
        }
        
        vi p;
        for (int i = 1; i <= n; i++)
        {
            p.push_back(i);
        }
        
        if (!(n%2))
        {
            p[0] = p[0]^p[2];
            p[2] = p[0]^p[2];
            p[0] = p[0]^p[2];


            p[0] = p[0]^p[1];
            p[1] = p[0]^p[1];
            p[0] = p[0]^p[1];
        }

        for (auto x : p)
        {
            cout << x << " ";
        }
        
        cout << "\n";
    }
    return 0;
}