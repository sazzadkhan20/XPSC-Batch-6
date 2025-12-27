/**
 *    author:  sazzad
 *    created: 01.09.2025 20:34:45
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
    int m, n;
    cin >> m >> n;
    vector<pair<pa, int>> v(n);
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        v[i] = {{t, y}, z};
    }
    auto flag = [&](int minutes)
    {
        int count = m;
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
        {
            int totalTime = (v[i].second * v[i].first.first) +
                            v[i].first.second;
            int val = v[i].second * (minutes / totalTime) + min(v[i].second, (minutes % totalTime) / v[i].first.first);
            val = min(count, val);
            count -= val;
            temp[i] = val;
        }
        if (!count)
        {
            for (int i = 0; i < n; i++)
                ans[i] = temp[i];
            return true;
        }
        return false;
    };

    int l = 0, r = 3e6, mid, res;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (flag(mid))
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << res;
    nl;
    for (auto val : ans)
        cout << val << ' ';
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}