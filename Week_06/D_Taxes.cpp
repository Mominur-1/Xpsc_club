// https://codeforces.com/problemset/problem/735/D

#include <bits/stdc++.h>
using namespace std;

bool isprime(int const &n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (!(n % i))
            return false;
    }

    return true;
}

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fastio;
    int n;
    cin >> n;

    if (isprime(n))
        cout << 1;
    else if (!(n % 2))
        cout << 2; // any even n > 2 = sum of two primes (Goldbach)
    else
    {
        cout << ((isprime(n - 2)) ? 2 : 3);
    }

    return 0;
}