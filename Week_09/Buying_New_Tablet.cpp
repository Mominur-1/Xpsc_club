// https://www.codechef.com/problems/TABLET

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
    wh(t)
    {
        int n, b, a = 0;
        cin >> n >> b;
        while(n--)
        {
            
            int w, h, p;
            cin >> w >> h >> p;
            a = ( (b >= p)? max(a, w*h) : a);
        }
        if (a)
        {
            cout << a;
        }
        else
        {
            cout << "no tablet";
        }
        
        cout << "\n";
    }
    return 0;
}