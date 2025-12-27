/**
 *    author:  sazzad
 *    created: 19.08.2025 02:11:59
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
    map<ll, int> mp;
    ll ans = 0, sum = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        mp[sum]++;
        if (sum % n == 0)
            ans += mp[sum];
        else
        {
            int idx = sum % n;
            if (mp.find(idx) != mp.end() && sum > n)
            {
                cout << idx << ' ' << i << endl;
                ans += mp[idx];
                mp[idx]++;
            }
        }
    }
    cout << ans;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}