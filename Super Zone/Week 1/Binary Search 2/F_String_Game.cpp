/**
 *    author:  sazzad
 *    created: 28.08.2025 17:54:21
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
    string t, p;
    cin >> t >> p;
    vector<int> v(t.length());
    int n = t.length(), m = p.length();
    for (int i = 0; i < t.length(); i++)
        cin >> v[i];

    auto flag = [&](int indx)
    {
        vector<bool> track(n, false);
        for (int i = 0; i < indx; i++)
            track[v[i] - 1] = true;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!track[i] && t[i] == p[j])
                j++;
            if (j == m)
                return true;
        }
        return false;
    };
    int l = 0, r = n, ans = 0, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (flag(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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