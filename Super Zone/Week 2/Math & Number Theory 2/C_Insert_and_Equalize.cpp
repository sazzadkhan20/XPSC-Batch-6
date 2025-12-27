/**
 *    author:  sazzad
 *    created: 04.12.2025 14:32:11
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
    int gcd = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int val = v[n - 1];
    bool flag = false;
    int count = 0;
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = abs(v[n - 1] - v[i]);
        gcd = __gcd(gcd, temp);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        val -= gcd;
        if (!flag)
            count++;
        if (val != v[i])
            flag = true;
        ans += abs((v[n - 1] - v[i])) / gcd;
    }
    if (flag)
        cout << ans + count;
    else
        cout << ans + n;
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