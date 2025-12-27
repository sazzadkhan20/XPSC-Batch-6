/**
 *    author:  sazzad
 *    created: 03.07.2025 03:27:23
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    map<int, ll> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[__lg(x)]++;
    }
    for (auto [key, value] : mp)
    {
        ans += ((value * (value - 1)) / 2);
    }
    cout << ans << '\n';
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