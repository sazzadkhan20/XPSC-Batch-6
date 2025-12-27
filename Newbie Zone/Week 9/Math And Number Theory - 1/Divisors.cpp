/**
 *    author:  sazzad
 *    created: 20.07.2025 04:18:30
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define nl cout << '\n'
const int N = 1e5 + 5;

void solve()
{
    ll n;
    cin >> n;
    // // O(n)
    // for (ll i = 1; i <= n; i++)
    // {
    //     // Divisor
    //     if (n % i == 0)
    //     {
    //         cout << i << ' ';
    //     }
    // }
    // nl;
    vector<ll> v;
    // O(sqrt(n))
    for (ll i = 1; i * i <= n; i++)
    {
        // Divisor
        if (n % i == 0)
        {
            v.push_back(i);
            if (i * i != n)
                v.push_back(n / i); // Another divisor of n
        }
    }
    sort(v.begin(), v.end());
    for (auto val : v)
    {
        cout << val << ' ';
    }
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}