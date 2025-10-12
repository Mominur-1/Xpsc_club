#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> price(n);
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
        totalSum += price[i];
    }

    vector<bool> Sum(totalSum + 1, false);
    Sum[0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = totalSum; j >= 0; j--)
        {
            if (Sum[j])
            {
                Sum[j + price[i]] = true;
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int count = 0;
        for (int i = l; i <= r && i <= totalSum; i++)
        {
            if (Sum[i])
            {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}