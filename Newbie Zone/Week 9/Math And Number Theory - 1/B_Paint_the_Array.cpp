/**
 *    author:  sazzad
 *    created: 22.07.2025 23:21:02
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int N = 1e5 + 5;

bool valid(ll gcd, vector<ll> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % gcd == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a, b;
    ll gcd1 = 0, gcd2 = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i % 2 == 0)
        {
            a.push_back(x);
            gcd1 = __gcd(gcd1, x);
        }
        else
        {
            b.push_back(x);
            gcd2 = __gcd(gcd2, x);
        }
    }
    if (valid(gcd1, b))
        cout << gcd1;
    else if (valid(gcd2, a))
        cout << gcd2;
    else
        cout << 0;
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