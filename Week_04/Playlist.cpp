// https://cses.fi/problemset/task/1141

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> last_pos;
    int l = 0, r = 0;
    long long l_u_subarray = 0;
    while (n--)
    {
        int k;
        cin >> k;
        if (last_pos.count(k))
        {

            l_u_subarray = max(l_u_subarray, (long long)(r - l));
            l = max(l, last_pos[k] + 1);
        }

        last_pos[k] = r;
        r++;
    }
    l_u_subarray = max(l_u_subarray, (long long)(r - l));

    cout << l_u_subarray;

    return 0;
}