#include <bits/stdc++.h>
#define ll long long int

using namespace std;

bool check_kth_bit_on_or_off(ll n, int k)
{
    return ((n >> k) & 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k;
        cin >> n >> k;
        map<int, int> mp;
        // ll ans = (1LL << 31) - 1; // INT_MAX
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            // ans = (ans & x);
            for (int j = __lg(x); j >= 0; j--)
            {
                if (check_kth_bit_on_or_off(x, j))
                {
                    mp[j]++;
                }
            }
        }
        ll ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            int offbits = n - mp[i];
            if (offbits <= k)
            {
                ans += (1LL << i);
                k -= offbits;
            }
        }
        cout << ans << '\n';
    }
}