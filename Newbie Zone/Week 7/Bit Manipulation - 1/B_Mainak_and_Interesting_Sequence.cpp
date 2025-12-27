/**
 *    author:  sazzad
 *    created: 25.06.2025 01:53:18
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n > m)
        cout << "No";
    else
    {
        if (n % 2 != 0)
        {
            cout << "Yes\n";
            for (int i = 1; i <= n - 1; i++)
                cout << 1 << ' ';
            cout << m - (n - 1);
        }
        else
        {
            if ((m - (n - 2)) % 2 == 0)
            {
                cout << "Yes\n";
                for (int i = 1; i <= n - 2; i++)
                    cout << 1 << ' ';
                int val = (m - (n - 2)) / 2;
                cout << val << ' ' << val;
            }
            else
                cout << "No";
        }
    }
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}