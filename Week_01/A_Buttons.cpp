// https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B, ans = 0;
    cin >> A >> B;

    for (int i = 0; i < 2; i++)
    {
        if (A > B)
        {
            ans += A;
            A--;
        }
        else
        {
            ans+= B;
            B--;
        }
    }
    cout << ans;

    return 0;
}