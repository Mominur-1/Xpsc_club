// https://open.kattis.com/problems/backspace

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin >> S;
    deque<char> result;

    for (char ch : S)
    {
        if (!result.empty() && ch == '<')
        {
            result.pop_back();
        }
        else
        {
            result.push_back(ch);
        }  
    }

    while (!result.empty())
    {
        cout << result.front();
        result.pop_front();
    }
    
    
    return 0;
}