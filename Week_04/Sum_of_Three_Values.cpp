// https://cses.fi/problemset/task/1641

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, X;
    cin >> n >> X;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    
    for (int i = 0; i < n-2; i++)
    {
        int j = i+1, k = n-1;
        while (k > j)
        {
            long long sum = a[i].first+a[j].first+a[k].first;
            if (sum == X)
            {
                cout << a[i].second+1 << " " << a[j].second+1 << " " << a[k].second+1;
                return 0;
            }
            else if(sum > X) k--;
            else j ++;
        }
    }

    cout << "IMPOSSIBLE";
    
    return 0;
}