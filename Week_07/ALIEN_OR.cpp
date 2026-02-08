#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
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
        int n, k;
        cin >> n >> k;

        string str[n];
        si st;
        f0(i, n)
        {
            cin >> str[i];
            int x=0, pos=-1;
            f0(j, k)
            {
                if (str[i][j] == '1') x++, pos = j;
            }
            if (x==1) st.insert(pos);
        }

        cout<<((st.size() == k)? "YES" : "NO") << "\n";
    }
    return 0;
}