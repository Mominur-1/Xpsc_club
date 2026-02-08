// https://atcoder.jp/contests/abc066/tasks/arc077_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = n-1; i >= 0; i-=2)
    {
        result.push_back(a[i]);
    }
    
    int j = (n%2) ? 1 : 0;
    for (int i = j; i < n; i+=2)
    {
        result.push_back(a[i]);
    }
    
    for (int x : result)
    {
        cout << x << " ";
    }

    
    return 0;
}