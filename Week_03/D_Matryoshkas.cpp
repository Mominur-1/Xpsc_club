// https://codeforces.com/problemset/problem/1790/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        while (n--)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        sort(a.begin(), a.end());
        map<int, int> waiting;
        int sets = 0;


        //the main logic if x(1 to n) then x+1(1 to n) ... no problem

        for (int x : a)
        {
            if (waiting[x] > 0)
            {
                // assign x to a set waiting for x
                waiting[x]--;
                waiting[x + 1]++; // next doll to continue this set
            }
            else
            {
                // start a new set
                sets++;
                waiting[x + 1]++; // next doll for this new set
            }
        }

        cout << sets << "\n";
    }

    return 0;
}
