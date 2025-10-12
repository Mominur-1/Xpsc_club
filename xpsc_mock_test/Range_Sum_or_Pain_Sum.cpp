#include <bits/stdc++.h>
using namespace std;

long long prefix_sum(int k)
{
    int x = k / 2;
    long long sum = 2 * (x * (x + 1) / 2); // sum of first k even numbers: 2 + 4 + ... + 2k
    if (k % 2)
    {
        sum += (x + 1); // adjustment for odd k
    }

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long result = prefix_sum(r) - prefix_sum(l - 1);
        cout << result << "\n";
    }

    return 0;
}
