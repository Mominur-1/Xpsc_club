// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    int k;
    cin >> S >> k;

    unordered_map<char, int> unique_window;
    int l=0, length=0;
    for (int i = 0; i < S.size(); i++)
    {
        unique_window[S[i]] ++;
        while (unique_window.size() > k)
        {
            unique_window[S[l]]--;
            if (unique_window[S[l]]==0) unique_window.erase(S[l]);
            l++;
        }
        
        if (unique_window.size() == k) length = max(length, i-l+1);
    }
    
    cout << ((length)? length : -1);
    
    return 0;
}