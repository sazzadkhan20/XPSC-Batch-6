/**
 *    author:  sazzad
 *    created: 22.11.2025 20:18:38
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

ll prime(ll n)
{
    while (true)
    {
        bool flag = false;
        for (ll i = 2; i * i <= n; i++)
        {
            if (!(n % i))
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            return n;
        n++;
    }
}

void solve()
{
    ll d;
    cin >> d;
    ll temp = prime(1 + d);
    ll ans = temp * prime(temp + d);
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