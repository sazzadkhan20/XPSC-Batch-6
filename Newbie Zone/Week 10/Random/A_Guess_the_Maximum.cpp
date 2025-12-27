/**
 *    author:  sazzad
 *    created: 14.08.2025 00:22:47
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
    int minValue = INT_MAX;
    int prev;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i > 0)
            minValue = min(minValue, max(x, prev));
        prev = x;
    }
    cout << minValue - 1;
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