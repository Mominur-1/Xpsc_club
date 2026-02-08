// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415#google_vignette

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

    int N, Q;
    int caseNo = 1;

    while (cin >> N >> Q) 
    {
        if (N == 0 && Q == 0) break;

        vi marbles(N);
        for (auto &m : marbles) cin >> m;

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << caseNo++ << ":\n";

        while (Q--) 
        {
            int x;
            cin >> x;

            auto it = lower_bound(marbles.begin(), marbles.end(), x);
            cout << x;
            if (it != marbles.end() && *it == x) 
            {
                cout << " found at " << (it - marbles.begin() + 1) << "\n";
            } 
            else cout << " not found\n";
        }
    }

    return 0;
}
