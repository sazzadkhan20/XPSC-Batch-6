/**
 *    author:  sazzad
 *    created: 2025.06.23 02:23:31
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
    map<int, int> count;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int i = 0; i <= __lg(x); i++)
        {
            if ((x >> i) & 1)
            {
                count[i]++;
            }
        }
    }
    for (auto [key, value] : count)
    {
        if (value == n)
        {
            ans += (1 << key);
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