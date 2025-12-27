/**
 *    author:  sazzad
 *    created: 23.08.2025 21:05:52
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
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // Lemda Function
    auto flag = [&](ll seconds)
    {
        ll totalProducts = 0;
        for (int i = 0; i < n; i++)
        {
            totalProducts += (seconds / v[i]);
            if (totalProducts >= t)
                return true;
        }
        return false;
    };
    ll l = 1, r = 1e18, mid, ans;
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
    cout << ans;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}