/**
 *    author:  sazzad
 *    created: 31.07.2025 04:39:25
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
    int n;
    cin >> n;
    vector<ll> v(n);
    ll maxValue = INT_MIN, gcd = 0, totalValue = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxValue = max(maxValue, v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        totalValue += (maxValue - v[i]);
        gcd = __gcd(gcd, (maxValue - v[i]));
    }
    cout << totalValue / gcd << ' ' << gcd;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}