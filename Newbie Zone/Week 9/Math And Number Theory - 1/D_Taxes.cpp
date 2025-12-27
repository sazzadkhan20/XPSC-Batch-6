/**
 *    author:  sazzad
 *    created: 24.07.2025 21:53:40
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int N = 1e5 + 5;

bool prime_check(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    int ans = 1;
    if (n > 2 && !prime_check(n))
    {
        if (n % 2 == 0 || prime_check(n - 2))
            ans = 2;
        else
            ans = 3;
    }
    cout << ans;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}