// https://cses.fi/problemset/task/1073

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tower = 0;;
    cin >> n;
    multiset<int> cube;
    while (n--)
    {
        int k;
        cin >> k;
        cube.insert(k);
        auto top = cube.upper_bound(k);
        if (top != cube.end())
        {
            cube.erase(top);
        }
    }
    
    cout << cube.size();
    return 0;
}