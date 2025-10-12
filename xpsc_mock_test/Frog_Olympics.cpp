#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000001;

vector<bool> leapy(MAX_N, false);
vector<bool> jumpster(MAX_N, false);

void Reach()
{
    leapy[0] = true;
    jumpster[0] = true;

    for (int i = 0; i < MAX_N; ++i)
    {
        if (leapy[i])
        {
            if (i + 3 < MAX_N)
            {
                leapy[i + 3] = true;
            }
            if (i + 4 < MAX_N)
            {
                leapy[i + 4] = true;
            }
        }
    }

    for (int i = 0; i < MAX_N; ++i)
    {
        if (jumpster[i])
        {
            if (i + 3 < MAX_N)
            {
                jumpster[i + 3] = true;
            }
            if (i + 5 < MAX_N)
            {
                jumpster[i + 5] = true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Reach();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (leapy[n] && jumpster[n])
        {
            cout << "Both\n";
        }
        else if (leapy[n])
        {
            cout << "Leapy\n";
        }
        else if (jumpster[n])
        {
            cout << "Jumpster\n";
        }
        else
        {
            cout << "None\n";
        }
    }

    return 0;
}
