/**
 *    author:  sazzad
 *    created: 26.07.2025 03:50:55
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
    ll l, r;
    cin >> l >> r;
    int n = (r - l + 1) / 2;
    vector<pa2> v;
    for (ll i = l; i <= r; i += 2)
        if (__gcd(i, i + 1) == 1)
            v.push_back({i, i + 1});
    if (v.size() == n)
    {
        cout << "YES";
        nl;
        for (auto p : v)
            cout << p.first << ' ' << p.second << '\n';
        return;
    }
    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}