/**
 *    author:  sazzad
 *    created: 12.07.2025 02:28:02
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define nl cout << '\n'
const int N = 1e5 + 5;

void bit_calc(vector<int> &v)
{
    int i = 0;
    while (i <= 32)
    {
        if (v[i] == 1)
        {
            int l = i;
            int r = i + 1;
            while (v[r] != 0)
            {
                v[r] = 0;
                r++;
            }
            if (r - l > 1)
            {
                v[l] = -1;
                v[r] = 1;
                i = r - 1;
            }
        }
        i++;
    }
}

void solve()
{
    ll x;
    cin >> x;
    vector<int> v(32, 0);
    for (int i = __lg(x); i >= 0; i--)
    {
        if ((x >> i) & 1)
            v[i] = 1;
    }
    bit_calc(v);
    cout << v.size();
    nl;
    for (int val : v)
    {
        cout << val << ' ';
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