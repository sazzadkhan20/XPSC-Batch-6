/**
 *    author:  sazzad
 *    created: 06.07.2025 04:38:44
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (!((a >> i) & 1) && ((b >> i) & 1) ||
            ((a >> i) & 1) && !((b >> i) & 1))
            ans += (1 << i);
    }
    cout << ans << '\n';
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