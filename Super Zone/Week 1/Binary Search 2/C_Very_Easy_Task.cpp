/**
 *    author:  sazzad
 *    created: 28.08.2025 18:52:55
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
    int n, x, y;
    cin >> n >> x >> y;
    n--;
    auto flag = [&](int seconds)
    {
        int count = ((seconds) / x) + ((seconds) / y);
        return count >= n;
    };
    int l = 0, r = 1e9, mid, ans;
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
    cout << ans + min(x, y) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}