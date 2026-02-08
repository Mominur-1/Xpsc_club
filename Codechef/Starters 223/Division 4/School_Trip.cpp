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
        int n, x, k;
        cin >> n >> x >> k;
        int force_notgo =x%k;
        int force_go = k-force_notgo;
        if ((force_notgo <= force_go) || (force_go+x > n))
        {
            cout << force_notgo;
        }
        else
        {
            cout << force_go;
        }
        cout << "\n";
    }
    return 0;
}