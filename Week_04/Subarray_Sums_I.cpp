// https://cses.fi/problemset/task/1660

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, X;
    cin >> n >> X;

    int num_subarray = 0;
    long long sum = 0;
    queue<int> window;
    while (n--) 
    {
        int value;
        cin >> value;
        sum += value;
        window.push(value);

        while (sum > X) 
        {
            sum -= window.front();
            window.pop();
        }

        if (sum == X) num_subarray++;
    }

    cout << num_subarray << "\n";
}
