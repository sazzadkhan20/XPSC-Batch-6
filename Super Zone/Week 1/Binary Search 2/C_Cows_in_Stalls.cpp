/**
 *    author:  sazzad
 *    created: 05.09.2025 23:34:14
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto flag = [&](int distance)
    {
        int count = 1;
        int prev = v[0];
        for (int i = 1; i < n; i++)
        {
            if (v[i] - prev >= distance)
            {
                count++;
                prev = v[i];
            }
        }
        return count >= k;
    };
    int l = 0, r = 1e9, mid, ans;
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
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}