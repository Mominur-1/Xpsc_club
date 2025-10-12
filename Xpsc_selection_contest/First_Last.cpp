#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<long long int> a(n + 1);
    map<long long int, pair<int, int>> v_f_l;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (v_f_l.find(a[i]) == v_f_l.end())
        {
            v_f_l[a[i]].first = i ;
        }
        v_f_l[a[i]].second = i ;
    }

    for (auto x : v_f_l)
    {
        cout << x.first << " " << x.second.first << " " << x.second.second << "\n";
    }

    return 0;
}
