// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string txt, pat;
    cin >> txt >> pat;
    vector<int> window_arr(26, 0);
    vector<int> pat_arr(26, 0);

    for (char ch : pat)
    {
        pat_arr[ch - 'a']++;
    }

    int cnt = 0, k = pat.size();

    for (int i = 0; i < k; i++)
    {
        window_arr[txt[i] - 'a']++;
    }

    if (window_arr == pat_arr)
    {
        cnt++;
    }

    for (int i = k; i < txt.size(); i++)
    {
        window_arr[txt[i] - 'a']++;
        window_arr[txt[i - k] - 'a']--;

        if (window_arr == pat_arr)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}