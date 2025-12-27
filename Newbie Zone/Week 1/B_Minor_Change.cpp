#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    int minOperation = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
            minOperation++;
    }
    cout << minOperation << endl;
}