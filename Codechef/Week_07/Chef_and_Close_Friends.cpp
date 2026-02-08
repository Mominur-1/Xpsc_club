// https://www.codechef.com/START214D/problems/P4HOME

#include <bits/stdc++.h>
using namespace std;


#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int one_side_f = min(y,z);
        
        cout << 2*one_side_f << "\n";
    }
    
    return 0;
}