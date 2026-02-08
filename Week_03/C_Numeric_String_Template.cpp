// https://codeforces.com/problemset/problem/2000/C

#include <bits/stdc++.h>
using namespace std;

// Polynomial hash base selection guide:
// | Situation | Suggested P                           |
// | --------- | ------------------------------------- |
// | n <= 1e3  | 31, 37, 41                            |
// | n <= 1e5  | 131, 257, 997                         |
// | n <= 1e6  | 1009, 10007 (sometimes use double hash) |
uint64_t vec_hash(const vector<int> &v)
{
    uint64_t h = 0;
    uint64_t P = 31;
    for (int x : v)
    {
        h = h * P + x;
    }
    return h;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, uint64_t> mp_a;
        unordered_map<int, vector<int>> tmp_a;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            tmp_a[a[i]].push_back(i);
        }
        for (auto &[key, vec] : tmp_a)
        {
            mp_a[key] = vec_hash(vec);
        }

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if ((int)s.length() != n)
            {
                cout << "NO\n";
                continue;
            }

            unordered_map<char, uint64_t> mp_s;
            unordered_map<char, vector<int>> tmp_s;
            for (int i = 0; i < n; i++)
            {
                tmp_s[s[i]].push_back(i);
            }
            for (auto &[key, vec] : tmp_s)
            {
                mp_s[key] = vec_hash(vec);
            }

            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (mp_a[a[i]] != mp_s[s[i]])
                {
                    flag = false;
                    break;
                }
            }
            cout << (flag ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
