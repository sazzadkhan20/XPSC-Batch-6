/**
 *    author:  sazzad
 *    created: 27.06.2025 23:51:05
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        auto it = mp.upper_bound(v[i]);
        if (it == mp.end())
        {
            mp[v[i]]++;
            ans++;
        }
        else
        {
            mp[it->first]--;
            if (mp[it->first] == 0)
                mp.erase(it);
            mp[v[i]]++;
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}