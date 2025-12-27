/**
 *    author:  sazzad
 *    created: 27.07.2025 01:44:12
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
    map<int, int> mp;
    vector<pa> coprime;
    int gcd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        gcd = __gcd(gcd, x);
        mp[x] = i + 1;
    }
    if (gcd != 1)
        cout << -1;
    else
    {
        int maxValue = -1;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = i; j <= 1000; j++)
            {
                if (__gcd(i, j) == 1)
                    coprime.push_back({i, j});
            }
        }
        for (auto [x, y] : coprime)
        {
            if (mp.find(x) != mp.end() && mp.find(y) != mp.end())
                maxValue = max(maxValue, mp[x] + mp[y]);
        }
        cout << maxValue;
    }
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