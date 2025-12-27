/**
 *    author:  sazzad
 *    created: 23.07.2025 05:27:37
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int N = 1e5 + 5;

ll GCD(ll a, ll b)
{
    return __gcd(a, b); // O(log(min(a,b)))
}

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b; // O(log(min(a,b)))
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    // cout << __gcd(0, 2) << '\n';
    cout << GCD(a, b) << '\n';
    cout << LCM(a, b) << '\n';
    cout << LCM(14, 21) << '\n';
    // cout << GCD(23, 19) << '\n';
    // cout << GCD(48, 50) << '\n';
    // cout << GCD(46, 50) << '\n';
    // cout << GCD(44, 50) << '\n';
    // cout << GCD(42, 50) << '\n';
    // cout << GCD(40, 50) << '\n';
    cout << LCM(15, 17) << '\n';
    cout << GCD(998244359987710471, 99824435698771045) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}