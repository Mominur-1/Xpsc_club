// https://www.codechef.com/problems/SAMESTR?tab=statement

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
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for (char ch : s)
        {
            (ch == '0') ? cnt0++ : cnt1++;
        }
        
        int ans = 0;
        f1(i,n)
        {
            if ((i >= cnt0 && (i-cnt0)%2==0) || (i >= cnt1 && (i-cnt1)%2==0))
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}