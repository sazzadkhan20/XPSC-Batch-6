/**
 *    author:  sazzad
 *    created: 06.09.2025 21:39:32
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
    int h, n;
    cin >> h >> n;
    vector<int> a(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    auto flag = [&](ll turns)
    {
        ll health = h;
        for (int i = 0; i < n; i++)
        {
            health -= a[i];
            health -= a[i] * ((turns - 1) / c[i]);
            if (health <= 0)
                return true;
        }
        return false;
    };
    ll l = 1, r = 4e10, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (flag(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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