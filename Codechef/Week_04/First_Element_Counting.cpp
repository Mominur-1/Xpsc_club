// https://www.codechef.com/START210D/problems/FIRSTCNT

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        vector<pair<long long, int>> arr;
        for (int i = 0; i < N; i++) arr.push_back({A[i], i});
        sort(arr.begin(), arr.end());

        vector<long long> ans(N, 0);

        for (int i = 0; i < N; i++) {
            if (i == 0 || i == N - 1) {
                ans[arr[i].second] = -1;
            } else {
                long double L = (arr[i - 1].first + arr[i].first) / 2.0;
                long double R = (arr[i].first + arr[i + 1].first) / 2.0;

                // L < X <= R  →  count = floor(R) - floor(L)
                long long count = floor(R) - floor(L);
                if (count < 0) count = 0;

                ans[arr[i].second] = count;
            }
        }

        for (int i = 0; i < N; i++) {
            cout << ans[i] << (i + 1 == N ? '\n' : ' ');
        }
    }
    return 0;
}


