/**
 *    author:  sazzad
 *    created: 14.08.2025 15:04:59
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
    vector<int> v(n);
    ll minDifference = INT_MAX;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int mask = 1; mask < (1 << n); mask++)
    {
        ll sum1 = 0, sum2 = 0;
        for (int k = 0; k < n; k++)
        {
            if ((mask >> k) & 1)
                sum1 += v[k];
            else
                sum2 += v[k];
        }
        minDifference = min(minDifference, abs(sum1 - sum2));
        if (minDifference == 0)
            break;
    }
    cout << minDifference;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}