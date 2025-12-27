/**
 *    author:  sazzad
 *    created: 24.08.2025 22:16:47
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    auto flag = [&](int mid)
    {
        int count = 1;
        ll pattern = v[0] + mid;
        for (int i = 1; i < n; i++)
        {
            if (abs(pattern - v[i]) > mid)
            {
                count++;
                pattern = mid + v[i];
            }
            if (count > 3)
                return false;
        }
        return true;
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