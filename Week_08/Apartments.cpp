// https://cses.fi/problemset/task/1084

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

    int n, m;
    int k;
    cin >> n >> m >> k;

    vi a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, count = 0;

    while (i < n && j < m) 
    {
        if (b[j] < a[i] - k) 
        {
            j++;
        } 
        else if (b[j] > a[i] + k) 
        {
            i++;
        } 
        else 
        {
            count++;
            i++;
            j++;
        }
    }

    cout << count << "\n";
    return 0;
}