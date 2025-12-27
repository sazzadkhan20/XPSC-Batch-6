/**
 *    author:  sazzad
 *    created: 13.12.2025 21:33:25
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
    int x, y, k;
    cin >> x >> y >> k;
    while (x != 1 && k > 0)
    {
        int op = (y - x % y);
        if (k < op)
        {
            x += k;
            k = 0;
        }
        else
        {
            k -= op;
            x += op;
            while (!(x % y))
                x /= y;
        }
    }
    if (k > 0) // x == 1
        x += k % (1 - y);
    cout << x << '\n';
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