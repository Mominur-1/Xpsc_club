// https://www.codechef.com/problems/MEXSPLIT

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

int main()
{
    fastio;
    wh(tc)
    {
        int zero = 0, non_zero=0;
        wh(n)
        {
            int x;
            cin >> x;
            if (x) non_zero++;
            else zero++;
        }
        cout << max(zero, non_zero) << "\n";
    }
    return 0;
}