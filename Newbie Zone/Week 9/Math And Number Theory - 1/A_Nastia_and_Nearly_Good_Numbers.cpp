/**
 *    author:  sazzad
 *    created: 26.07.2025 05:52:37
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
    ll a, b;
    cin >> a >> b;
    if (b == 1)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        ll val = a * b;
        int i = 2;
        while (true)
        {
            if (val - a != a && (val - a) % (a * b) != 0)
                break;
            val *= i;
            i++;
        }
        cout << a << ' ' << val - a << ' ' << val;
        nl;
    }
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