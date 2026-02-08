// https://cses.fi/problemset/task/1619

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
    
    int n;
    cin >> n;
    vector<pair<int, int>> events(2*n);
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        events.push_back({a,1});
        events.push_back({b,-1});
    }

    sort(events.begin(), events.end());
    int mx_c = 0, current=0;

    for (auto p : events)
    {
        current += p.second;
        mx_c = max(mx_c, current);
    }
    
    cout << mx_c << "\n";
    return 0;
}