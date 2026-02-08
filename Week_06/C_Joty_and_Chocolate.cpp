// https://codeforces.com/problemset/problem/678/C

#include <bits/stdc++.h>
using namespace std;

#define LCM(a, b) ((a) / __gcd(a, b) * (b))

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    fastio;
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    int red = n / a;          // all divisible by a
    int blue = n / b;         // all divisible by b
    int both = n /LCM(a,b); // divisible by both

    if (p > q)
        blue -= both;
    else
        red -= both;

    cout << p * red + q * blue;

    return 0;
}