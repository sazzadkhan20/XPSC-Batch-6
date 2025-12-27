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
        cin >> n;
        vector<string> v;
        bool flag = false;
        for (int i = 0; i < 2; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            if ((v[0][i] == 'G' && v[1][i] == 'B') || (v[0][i] == 'B' && v[1][i] == 'G'))
                continue;
            if (v[0][i] != v[1][i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}