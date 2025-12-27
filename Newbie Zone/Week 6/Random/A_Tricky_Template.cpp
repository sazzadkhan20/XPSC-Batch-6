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
        string a, b, c;
        cin >> n >> a >> b >> c;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (c[i] != a[i] && c[i] != b[i])
            {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO\n";
        }
    }
}