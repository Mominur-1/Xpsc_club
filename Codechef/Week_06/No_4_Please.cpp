// https://www.codechef.com/START213D/problems/NO4S

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
        int num1=0, num2=0, num3=0;
        while (n--)
        {
            int num;
            cin >> num;
            if (num==1) num1++;
            else if (num==2) num2++;
            else num3++;
        }
        cout << min(num1, num3) + ((num2 > 0)? num2-1:num2) << "\n";
    }
    
    return 0;
}