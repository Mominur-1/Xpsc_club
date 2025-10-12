#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    bool flag = false;

    while (n > 0)
    {
        if (n % 10 == 7)
        {
            flag = true;
            break;
        }
        n /= 10;
    }

    cout << ((flag) ? "Lucky" : "Not Lucky");

    return 0;
}