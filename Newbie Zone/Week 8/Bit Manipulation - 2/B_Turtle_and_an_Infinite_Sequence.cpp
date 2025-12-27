/**
 *    author:  sazzad
 *    created: 10.07.2025 04:07:56
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define nl cout << '\n'
const int N = 1e5 + 5;

void bit_calc(ll r, map<int, ll> &mp, bool flip)
{
    for (int i = __lg(r); i >= 0; i--)
    {
        ll bit = (1LL << i) * (((r + 1) / (1LL << i)) / 2);
        if (((r + 1) / (1LL << i)) % 2 == 1)
            bit += (r + 1) % (1LL << i);
        if (flip)
            mp[i] += bit;
        else
            mp[i] -= bit;
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m == 0)
    {
        cout << n;
    }
    else
    {
        ll r = n + m;
        ll l = max(1LL, n - m);
        ll ans = 0;
        map<int, ll> mp;
        bit_calc(r, mp, true);
        bit_calc(l - 1, mp, false);
        for (auto [key, value] : mp)
        {
            if (value > 0)
                ans += (1LL << key);
        }
        cout << ans;
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