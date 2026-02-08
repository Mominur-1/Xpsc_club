// https://www.codechef.com/problems/BLNDOR

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define yy cout<<"YES"<<"\n"
#define nn cout<<"NO"<<"\n"
#define yn(found) cout<< ((found)?"YES":"NO")<<"\n"
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
        int exponent = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x==2)
            {
                exponent++;
            }
        }
        
        // because (k^8) = (2^exponent), (2^x)^8 = (2)^exponent
        //(2)^(8x) = (2)^exponent, 8x = exponent, x = (exponent/8)
        // k = (2)^(exponent/8)
        // if exponent/8 = fraction value then, (2)^(exponent/8) = k = fraction value
        bool fraction = (exponent%8);
        yn(!fraction);
    }
    return 0;
}