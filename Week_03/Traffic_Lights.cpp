// https://cses.fi/problemset/task/1163

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    set<int> traffic_lights;
    multiset<int> segments = {x};

    while (n--) {
        int p;
        cin >> p;

        if (p==x)
        {
            p--;
        }
        
        auto it = traffic_lights.lower_bound(p);
        int right = (it == traffic_lights.end()) ? x : *it;
        int left = (it == traffic_lights.begin()) ? 0 : *prev(it);

        segments.erase(segments.find(right - left));
        segments.insert(p - left);
        segments.insert(right - p);

        traffic_lights.insert(p);

        cout << *segments.rbegin() << " ";
    }
    cout << "\n";
}
