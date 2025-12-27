/**
 *    author:  sazzad
 *    created: 22.07.2025 03:36:35
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int N = 1e5 + 5;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<ll, int> mp;
    mp[0] = 1;
    ll segmentCount = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        if (mp.find(sum - k) != mp.end())
            segmentCount += mp[sum - k];
        mp[sum]++;
    }
    cout << segmentCount;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}