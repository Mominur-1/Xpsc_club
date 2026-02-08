// https://www.codechef.com/START211D/problems/WOLFDOWN

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
        int n;
        cin >> n;
        string S;
        cin >> S;

        int totall_bird = 0;
        for (char ch : S)
        {
            if (ch == '1')
            {
                break;
            }
            totall_bird ++;
        }
        cout << totall_bird << "\n";
    }
    
    return 0;
}