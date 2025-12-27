#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string s, t;
        cin >> n >> s >> t;
        if (s == t)
        {
            cout << "YES\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    cout << "YES\n";
                    break;
                }
                else if (s[i] != t[i])
                {
                    cout << "NO\n";
                    break;
                }
            }
        }
    }
}