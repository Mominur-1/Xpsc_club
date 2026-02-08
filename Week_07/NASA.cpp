// https://www.codechef.com/problems/PALIXOR

#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

bool isPalindrome(int x)
{
    string s = to_string(x);
    int L = 0, R = s.size() - 1;
    while (L < R)
        if (s[L++] != s[R--])
            return false;
    return true;
}

void markPalindrome(vector<int> &pl, int maxN)
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
            pl.push_back(i);
    }
}

int main()
{
    fastio;
    int tc;
    cin >> tc;
    
    vector<int> pal;
    int maxN = (1LL << 15);
    markPalindrome(pal, maxN);

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n), cnt(maxN);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }


        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            cnt[a[i]] --;
            for (int j = 0; j < pal.size(); j++)
            {
                int target = (a[i] ^ pal[j]);
                ans += cnt[target];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}