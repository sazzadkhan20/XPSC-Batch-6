/**
 *    author:  sazzad
 *    created: 25.06.2025 20:17:50
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<ll> v(n);
    int ans = 0, i = 0, j = n - 1;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    while (i <= j)
    {
        if (i == j)
        {
            ans++;
            i++, j--;
        }
        else if (v[i] + v[j] <= x)
        {
            ans++;
            i++, j--;
        }
        else
        {
            ans++;
            j--;
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