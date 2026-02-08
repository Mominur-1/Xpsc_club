// https://www.codechef.com/problems/XOREQUAL

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
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
const int M = 1000000007;

int binaryExp(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b&1) ans = (ans*1ll*a)%M;
        a=(a*1ll*a) % M;
        b >>= 1;
    }
    
    return ans;
}

int main()
{
    fastio;
    wh(tc)
    {
        int n;
        cin >> n;
        cout << binaryExp(2, n-1) << "\n"; // because if x is even then 0 bits off, x^(x+1) = 1, (x+2)^(x+3) = 1
    }
    return 0;
}