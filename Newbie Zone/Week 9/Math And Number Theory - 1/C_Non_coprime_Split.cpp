/**
 *    author:  sazzad
 *    created: 26.07.2025 11:20:28
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{
    int l, r;
    cin >> l >> r;
    if (l % 2 == 0 && l > 2)
        cout << l / 2 << ' ' << l / 2;
    else if (r % 2 == 0 && r > 2)
        cout << r / 2 << ' ' << r / 2;
    else if (l != r)
    {
        if (r <= 3)
            cout << -1;
        else
            cout << (r - 1) / 2 << ' ' << (r - 1) / 2;
    }
    else
    {
        bool flag = false;
        for (ll i = 2; i * i <= l; i++)
        {
            if (l % i == 0)
            {
                cout << i << ' ' << l - i;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << -1;
    }
    nl;
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