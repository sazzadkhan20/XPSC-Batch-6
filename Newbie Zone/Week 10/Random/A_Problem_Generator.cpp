/**
 *    author:  sazzad
 *    created: 13.08.2025 23:24:43
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
    string s;
    cin >> n >> m >> s;
    vector<int> v(7, 0);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int idx = s[i] - 'A';
        v[idx]++;
    }
    for (int i = 0; i < 7; i++)
    {
        if (v[i] < m)
            count += (m - v[i]);
    }
    cout << count;
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