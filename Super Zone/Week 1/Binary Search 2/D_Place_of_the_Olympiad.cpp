/**
 *    author:  sazzad
 *    created: 07.09.2025 10:37:41
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
    int n, m, k;
    cin >> n >> m >> k;

    auto flag = [&](int length)
    {
        ll val = m / (length + 1);
        if (m % (length + 1) == length)
            return n * (val + 1) * length >= k;
        return n * (val * length + m % (length + 1)) >= k;
    };
    int l = 1, r = m, mid, ans;
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