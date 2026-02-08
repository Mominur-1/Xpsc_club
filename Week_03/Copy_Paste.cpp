// https://www.codechef.com/problems/RRCOPY

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
        unordered_set<int> st;
        while (n--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << st.size() << "\n";
    }
    
    return 0;
}