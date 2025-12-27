/**
 *    author:  sazzad
 *    created: 25.07.2025 05:51:51
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
    // (a*b) law - (a%MOD * b%MOD)%MOD
    int n, ans = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
        ans = (1LL * ans % MOD * i % MOD) % MOD;
    cout << ans;
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