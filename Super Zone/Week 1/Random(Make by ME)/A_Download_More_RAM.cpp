/**
 *    author:  sazzad
 *    created: 24.11.2025 09:56:03
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

bool compare(pa l, pa r)
{
    if (l.first == r.first)
        return l.second > r.second;
    return l.first < r.first;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pa> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = {x, 0};
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = {v[i].first, x};
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < n; i++)
    {
        if (k >= v[i].first)
            k += v[i].second;
        else
            break;
    }
    cout << k << '\n';
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