// https://open.kattis.com/problems/qaly

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    float qaly = 0;
    while (N--)
    {
        float q, y;
        cin >> q >> y;
        qaly += (q * y);
    }
    
    cout << qaly;
    
    return 0;
}