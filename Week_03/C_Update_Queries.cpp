// https://codeforces.com/problemset/problem/1986/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string S;
        cin >> S;

        vector<int> ind(m);
        vector<bool> track(n+1, false);
        for (int i = 0; i < m; i++)
        {
            cin >> ind[i];
        }
        sort(ind.begin(), ind.end());

        string C;
        cin >> C;
        sort(C.begin(), C.end());

        for (int x : ind)
        {
            if (!track[x])
            {
                char first_c = C[0];
                C.erase(0,1);
                S[x-1] = first_c;
                track[x] = true;
            }
        }
        
        cout << S << '\n';
    }
    
    return 0;
}