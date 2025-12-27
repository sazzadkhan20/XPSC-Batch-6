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
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            bool flag = false;
            for (int i = 2; i <= n; i += 2)
            {
                if (!flag)
                    cout << "AA";
                else
                    cout << "BB";
                flag = !flag;
            }
            cout << '\n';
        }
    }
}