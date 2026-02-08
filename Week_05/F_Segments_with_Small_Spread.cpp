// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    long long cnt = 0;
    int l = 0;
    multiset<long long> track;

    for (int i = 0; i < n; i++)
    {
        track.insert(a[i]);
        while (!track.empty() && (*--track.end() - *track.begin()) > k)
        {
            track.erase(track.find(a[l]));
            l++;
        }
        cnt += (i - l + 1);
    }

    cout << cnt << "\n";
    return 0;
}
