#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;            
        cin >> n;
        string s;
        cin >> s;
        
        int i = 1;
        while (n /= 2)
        {
            i++;
        }
        cout << i << "\n";
    }
    
    
    return 0;
}