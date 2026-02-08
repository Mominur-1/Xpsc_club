// https://codeforces.com/problemset/problem/977/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string S;
    cin >> S;
    unordered_map<string, int> substring;

    for (int i = 0; i < n-1; i++)
    {
        string two_gram = S.substr(i, 2);
        substring[two_gram]++;
    }
    
    string result = "";
    int max_cnt = 0;
    for (auto sub : substring)
    {
        if (sub.second > max_cnt)
        {
            max_cnt = sub.second;
            result = sub.first;
        }
        else if (sub.second == max_cnt && sub.first < result)
        {
            result = sub.first;
        }
    }
    
    cout << result ;
    
    return 0;
}