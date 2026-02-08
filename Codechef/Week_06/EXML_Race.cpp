// https://www.codechef.com/START213D/problems/EXMLF1

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
        pair<int, int>speed_idx;
        for (int i = 0; i < n; i++)
        {
            int d, t;
            cin >> d >> t;
            float speed = d/t;
            if (speed > speed_idx.first)
            {
                speed_idx = {speed, i+1};
            }
        }
        cout << speed_idx.second << "\n";
    }
    
    return 0;
}