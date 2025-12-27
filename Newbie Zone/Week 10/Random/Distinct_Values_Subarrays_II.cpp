/**
 *    author:  sazzad
 *    created: 14.08.2025 13:03:11
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
    map<int, int> mp;
    ll ans = 0;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (l < n)
    {
        mp[v[l]]++;
        if (mp.size() <= k)
            ans += (l - r) + 1;
        else
        {
            while (mp.size() > k)
            {
                mp[v[r]]--;
                if (mp[v[r]] == 0)
                    mp.erase(v[r]);
                r++;
            }
            ans += (l - r) + 1;
        }
        l++;
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}