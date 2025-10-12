// https://www.codechef.com/START207D/problems/TOURIST

#include <bits/stdc++.h>
using namespace std;

int coordinate_distance(int x1, int y1, int x2, int y2)
{
    return (abs(x2 - x1) + abs(y2 - y1));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int N, A, B, Minimum_dis = INT_MAX;
        cin >> N >> A >> B;

        while (N--)
        {
            int x, y;
            cin >> x >> y;

            Minimum_dis = min(Minimum_dis, coordinate_distance(A, B, x, y));
        }
        cout << Minimum_dis << "\n";
    }

    return 0;
}