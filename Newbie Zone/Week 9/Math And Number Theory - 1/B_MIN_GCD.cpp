/**
 *    author:  sazzad
 *    created: 27.07.2025 04:52:04
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
    vector<ll> v(n);
    ll gcd = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] % v[0] == 0)
            gcd = __gcd(gcd, v[i]);
    }
    if (gcd == v[0])
        cout << "Yes";
    else
        cout << "No";
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