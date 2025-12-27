/**
 *    author:  sazzad
 *    created: 22.11.2025 19:30:44
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
    ll a, b, l;
    cin >> a >> b >> l;
    map<ll, bool> mp;
    for (int i = 0; i <= 20; i++)
    {
        for (int k = 0; k <= 20; k++)
        {
            if ((ll)((ll)pow(a, i) * (ll)pow(b, k)) > l)
                break;
            if (l % (ll)(pow(a, i) * pow(b, k)) == 0)
                mp[(ll)(pow(a, i) * pow(b, k))] = true;
        }
    }
    cout << mp.size();
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