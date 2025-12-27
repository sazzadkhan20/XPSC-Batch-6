/**
 *    author:  sazzad
 *    created: 19.07.2025 23:12:17
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define nl cout << '\n'
const int N = 1e5 + 5;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i * i != n)
                v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    if (k <= v.size())
        cout << v[k - 1];
    else
        cout << -1;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}