/**
 *    author:  sazzad
 *    created: 23.07.2025 23:26:39
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int N = 1e5 + 5;

void solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll val1 = n / a, val2 = n / b;
    ll ans = val1 * p + val2 * q;
    ll lcm = (a / __gcd(a, b)) * b;
    ll val3 = n / lcm;
    if (p <= q)
        ans -= val3 * p;
    else
        ans -= val3 * q;
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}