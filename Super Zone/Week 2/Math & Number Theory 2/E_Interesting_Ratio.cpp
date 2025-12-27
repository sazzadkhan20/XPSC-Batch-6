/**
 *    author:  sazzad
 *    created: 10.11.2025 00:07:28
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int MOD = 1e9 + 7;
const int N = 1e7 + 20;

vector<int> seive()
{
    vector<bool> allPrime(N, true);
    vector<int> prime;
    for (ll i = 2; i * i <= N; i++)
        if (allPrime[i])
            for (int k = i + i; k <= N; k += i)
                allPrime[k] = false;
    for (int i = 2; i <= N; i++)
        if (allPrime[i])
            prime.push_back(i);
    return prime;
}

void solve()
{
    int tc;
    cin >> tc;
    vector<int> prime = seive();
    while (tc--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        // O(n*loglogn)
        for (int i = 1; i <= n / 2; i++)
        {
            int j = 1;
            int k = i * prime[0];
            while (j < prime.size() && k <= n)
            {
                k = i * prime[j];
                j++;
                ans++;
            }
        }
        cout << ans << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}