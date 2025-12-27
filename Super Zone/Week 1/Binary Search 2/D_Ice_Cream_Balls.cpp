/**
 *    author:  sazzad
 *    created: 13.09.2025 11:04:27
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
    ll n;
    cin >> n;
    auto flag = [&](ll balls)
    {
        if (balls % 2 == 0)
            return ((balls / 2) * (balls - 1)) <= n;
        else
            return (((balls - 1) / 2) * (balls)) <= n;
    };
    ll l = 2, r = 2648956421, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (flag(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    ll val = n - (ans * (ans - 1)) / 2;
    ans += val;
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