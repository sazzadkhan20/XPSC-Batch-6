/**
 *    author:  sazzad
 *    created: 20.10.2025 04:08:03
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
    vector<bool> prime(n + 1, true);
    // Seive Alogrithm O(nloglog(n))
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
            for (int k = i + i; k <= n; k += i)
                prime[k] = false;
    }
    for (int i = 2; i <= n; i++)
        if (prime[i])
            cout << i << ' ';
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}