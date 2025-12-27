/**
 *    author:  sazzad
 *    created: 01.11.2025 14:53:50
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
    int n;
    cin >> n;
    map<int, int> primeFactorization;
    // O(sqrt(n))
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            primeFactorization[i]++;
            n /= i;
        }
    }
    if (n > 1)
        primeFactorization[n]++;
    for (auto [key, value] : primeFactorization)
        cout << key << " -> " << value << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}