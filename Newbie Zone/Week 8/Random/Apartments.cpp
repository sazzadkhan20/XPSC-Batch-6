/**
 *    author:  sazzad
 *    created: 25.06.2025 04:36:42
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n, m;
    ll k;
    cin >> n >> m >> k;
    int i = 0, j = 0, ans = 0;
    vector<ll> d(n), a(m);
    for (int i = 0; i < n; i++)
        cin >> d[i];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(d.begin(), d.end()), sort(a.begin(), a.end());
    while (i < m && j < n)
    {
        if (d[j] >= a[i] - k && d[j] <= a[i] + k)
        {
            ans++;
            i++, j++;
        }
        else
        {
            if (d[j] > a[i])
                i++;
            else
                j++;
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