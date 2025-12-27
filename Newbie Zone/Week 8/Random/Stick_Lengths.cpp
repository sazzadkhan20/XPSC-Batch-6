/**
 *    author:  sazzad
 *    created: 26.06.2025 01:08:15
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
    ll ans = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int mid = v[n / 2];
    for (int i = 0; i < n; i++)
    {
        ans += abs(mid - v[i]);
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}