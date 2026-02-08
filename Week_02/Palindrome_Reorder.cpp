// https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    vector<int> cnt(26);

    for (char ch : S)
    {
        cnt[ch - 'A'] ++;
    }

    string plaindrome;
    int odd_idx = -1;
    int odd_cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        if (odd_cnt > 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
        
        if (cnt[i] % 2)
        {
            odd_cnt ++;
            odd_idx = i;
        }
        else if (cnt[i] != 0)
        {
            plaindrome += string(cnt[i]/2, i+'A');
        }  
    }

    string last_part = plaindrome;
    reverse(last_part.begin(), last_part.end());
    
    if (odd_idx >= 0)
    {
        plaindrome += string(cnt[odd_idx], odd_idx+'A');
    }

    cout << plaindrome+last_part ;
    return 0;
}