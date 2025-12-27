#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (s[0] != s[n - 1])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}