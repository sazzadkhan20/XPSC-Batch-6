/**
 *    author:  sazzad
 *    created: 15.08.2025 20:13:54
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), bits(32, 0);
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        val ^= a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        for (int k = 0; k <= __lg(b[i]); k++)
        {
            if ((b[i] >> k) & 1)
                bits[k] = 1;
        }
    }
    if (n % 2 == 0)
    {
        int minVal = val;
        for (int i = 0; i < 32; i++)
        {
            if (bits[i] && ((val >> i) & 1))
                minVal -= (1 << i);
        }
        cout << minVal << ' ' << val;
    }
    else
    {
        int maxVal = val;
        for (int i = 0; i < 32; i++)
        {
            if (bits[i] && !((val >> i) & 1))
                maxVal += (1 << i);
        }
        cout << val << ' ' << maxVal;
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