#include <bits/stdc++.h>
#define ll long long int
#define pa pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, s, m, prevR;
        cin >> n >> s >> m;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            if (i == 0)
            {
                if (l - 0 >= s)
                    flag = true;
            }
            else
            {
                if (l - prevR >= s)
                    flag = true;
            }
            prevR = r;
        }
        if (m - prevR >= s)
            flag = true;
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}