/**
 *    author:  sazzad
 *    created: 04.09.2025 23:25:19
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
    string s;
    int nb, ns, nc, pb, ps, pc;
    ll coins;
    int br = 0, sa = 0, ch = 0;
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> coins;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
            br++;
        else if (s[i] == 'S')
            sa++;
        else
            ch++;
    }

    auto flag = [&](ll burgerNum)
    {
        ll c = coins;
        ll tbr = burgerNum * br;
        ll tsa = burgerNum * sa;
        ll tch = burgerNum * ch;
        tbr -= nb, tsa -= ns, tch -= nc;
        tbr = max(tbr, 1LL * 0);
        tsa = max(tsa, 1LL * 0);
        tch = max(tch, 1LL * 0);
        c -= tbr * pb;
        c -= tsa * ps;
        c -= tch * pc;
        return c >= 0;
    };

    ll l = 0,
       r = 1e13, mid, ans;
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