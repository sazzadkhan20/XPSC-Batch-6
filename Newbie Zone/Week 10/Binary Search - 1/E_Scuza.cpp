/**
 *    author:  sazzad
 *    created: 10.08.2025 10:00:15
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
    int n, q;
    cin >> n >> q;
    map<int, int> mp;
    vector<ll> prefix_sum(n);
    ll sum = 0;
    int prev;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            mp[x] = i;
            prev = x;
        }
        else if (prev < x)
        {
            mp[x] = i;
            prev = x;
        }
        sum += x;
        prefix_sum[i] = sum;
    }
    while (q--)
    {
        int key;
        cin >> key;
        auto it = mp.upper_bound(key);
        if (it != mp.begin() && key >= prefix_sum[0])
        {
            int indx;
            if (it == mp.end())
                indx = n - 1;
            else
                indx = it->second - 1;
            cout << prefix_sum[indx] << ' ';
        }
        else
            cout << 0 << ' ';
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