/**
 *    author:  sazzad
 *    created: 12.09.2025 19:58:19
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
    int n, d;
    ll c, sum = 0;
    cin >> n >> c >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < d; i++)
    {
        if (i == n)
            break;
        sum += a[i];
    }
    if (sum >= c)
        cout << "Infinity";
    else if (1LL * a[0] * d < c)
        cout << "Impossible";
    else
    {
        auto flag = [&](int k)
        {
            ll coins = 0;
            int remain = d, days, totalDays = 0;
            k++;
            for (int i = 0; i < n; i++)
            {
                remain--;
                days = 1 + (remain / k);
                totalDays += days;
                coins += 1LL * days * a[i];
                if (coins >= c)
                    return true;
                if (totalDays >= d)
                    break;
            }
            return false;
        };
        int l = 0, r = d - 2, mid, ans;
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
        cout << ans;
    }
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