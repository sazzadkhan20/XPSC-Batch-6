/**
 *    author:  sazzad
 *    created: 08.08.2025 12:42:14
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
    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cin >> q;
    while (q--)
    {
        int key;
        cin >> key;
        int ans = 0;
        auto it = upper_bound(v.begin(), v.end(), key);
        if (it != v.begin())
            ans = it - v.begin();
        cout << ans;
        nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}