// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    queue<int> negIndices; // stores indices of negative numbers
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        // Add current element if it’s negative
        if (arr[i] < 0)
        {
            negIndices.push(i);
        }

        // Remove elements that are out of the current window
        if (!negIndices.empty() && negIndices.front() <= i - k)
        {
            negIndices.pop();
        }

        // Start recording answers once we have a full window
        if (i >= k - 1)
        {
            if (!negIndices.empty())
            {
                ans.push_back(arr[negIndices.front()]);
            }
            else
            {
                ans.push_back(0);
            }
        }
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
