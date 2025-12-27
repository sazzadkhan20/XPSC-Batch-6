/**
 *    author:  sazzad
 *    created: 2025.06.23 15:19:28
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(32, 0);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int i = 0; i <= __lg(x); i++)
        {
            if ((x >> i) & 1)
            {
                v[i]++;
            }
        }
    }
    for (int i = 0; i < 32; i++)
    {
        if (v[i] == n)
        {
            ans += (1 << i);
        }
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