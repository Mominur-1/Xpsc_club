// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int max_sum = 0, window_sum = 0, prev_v = 0;
    queue<int> sliding;
    sliding.push(0);

    while (n--)
    {
        int x;
        cin >> x;
        window_sum += x;
        sliding.push(x);
        if (sliding.size() == k + 1)
        {
            window_sum -= sliding.front();
            sliding.pop();
            max_sum = max(max_sum, window_sum);
        }
    }

    cout << max_sum;
    return 0;
}
