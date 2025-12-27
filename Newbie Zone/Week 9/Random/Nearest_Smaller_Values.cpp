/**
 *    author:  sazzad
 *    created: 22.07.2025 00:44:36
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int N = 1e5 + 5;

bool cmp(pa l, pa r)
{
    if (l.first == r.first)
        return l.second > r.second;
    return l.first < r.first;
}

void solve()
{
    int n;
    cin >> n;
    map<int, bool> mp;
    vector<pa> v(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = {x, i};
    }
    sort(v.begin(), v.end(), cmp);
    ans[v[0].second] = -1;
    mp[v[0].second] = true;
    for (int i = 1; i < n; i++)
    {
        auto it = mp.lower_bound(v[i].second);
        // cout << it->first << endl;
        if (it == mp.begin())
            ans[v[i].second] = -1;
        else
        {
            ans[v[i].second] = (--it)->first;
        }
        mp[v[i].second] = true;
    }
    for (auto val : ans)
        cout << val + 1 << ' ';
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}