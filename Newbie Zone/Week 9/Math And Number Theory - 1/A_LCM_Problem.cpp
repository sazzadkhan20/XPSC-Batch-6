/**
 *    author:  sazzad
 *    created: 27.07.2025 05:15:44
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
    int x = -1, y = -1;
    if (1LL * l * 2 <= r)
        x = l, y = l * 2;
    cout << x << ' ' << y;
    // nl;
    // for (int i = 9; i < 16; i++)
    // {
    //     cout << i << " -> " << LCM(8, i) << endl;
    // }
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