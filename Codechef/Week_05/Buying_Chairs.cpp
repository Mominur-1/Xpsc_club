// https://www.codechef.com/START211D/problems/CHRBUY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int w, p, k;
        cin >> w >> p >> k;
        int styliush = 0;
        if (k >= w)
        {
            styliush += (w*2 + (k-w));
        }
        else
        {
            styliush += k*2;
        }
        
        cout << styliush << "\n";
    }
    
    
    return 0;
}