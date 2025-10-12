#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, target;
    cin >> n;

    vector<int> books(n);
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }

    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (books[i] == target)
        {
            cout << i << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";

    return 0;
}