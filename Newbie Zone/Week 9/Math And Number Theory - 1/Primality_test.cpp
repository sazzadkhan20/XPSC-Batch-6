/**
 *    author:  sazzad
 *    created: 21.07.2025 03:50:35
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int N = 1e5 + 5;

bool isPrime(ll n)
{
    if (n == 1)
        return false;
    // O(sqrt(n))
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    if (isPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}