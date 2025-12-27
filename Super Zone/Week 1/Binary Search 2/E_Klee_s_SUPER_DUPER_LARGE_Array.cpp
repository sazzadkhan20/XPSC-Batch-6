/**
 *    author:  sazzad
 *    created: 12.09.2025 23:59:01
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

ll range_sum(ll a, ll b, ll m)
{
    return m - b * (b + 1) / 2 - (a * (a - 1) / 2);
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll l = k, r = n + k - 1, mid, ans = INT64_MAX;
    ll mainValue = r * (r + 1) / 2 - (l * (l - 1) / 2);
    while (l <= r)
    {
        mid = (l + r) / 2;
        ll mid1 = l + (mid - l) / 2;
        ll mid2 = r + (r - mid) / 2;
        ll ans1 = range_sum(l, mid1, mainValue);
        ll ans2 = range_sum(mid2, r, mainValue);
        if (ans1 <= ans2)
        {
            ans = min(ans, ans1);
            r = mid2 - 1;
        }
        else
        {
            ans = min(ans, ans2);
            l = mid1 - 1;
        }
    }
    cout << ans;
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