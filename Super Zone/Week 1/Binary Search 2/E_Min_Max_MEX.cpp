/**
 *    author:  sazzad
 *    created: 09.09.2025 14:18:41
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto flag = [&](int mexValue)
    {
        map<int, set<int>> mp;
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (mp[count].size() == mexValue &&
                v[i] < mexValue)
            {
                count++;
                mp[count].insert(v[i]);
            }
            else
            {
                if (v[i] < mexValue)
                    mp[count].insert(v[i]);
            }
        }
        if (mp.size() >= k && mp[k].size() == mexValue)
            return true;
        return false;
    };
    int l = 0, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (flag(mid) || mid == 0)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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