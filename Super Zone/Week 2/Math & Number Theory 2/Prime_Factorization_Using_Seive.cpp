/**
 *    author:  sazzad
 *    created: 01.11.2025 04:57:46
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

// Generate All Prime O(n*loglogn)
vector<int> seive()
{
    vector<int> prime(N + 1, true);
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i])
            for (int k = i + i; k <= N; k += i)
                prime[k] = false;
    }
    vector<int> allPrime;
    for (int i = 2; i <= N; i++)
        if (prime[i])
            allPrime.push_back(i);
    return allPrime;
}

void solve()
{
    vector<int> prime = seive();
    // cout << prime.size() << '\n';
    int n;
    cin >> n;
    map<int, int> primeFactorization;
    int i = 0;
    // Overall O(n*loglogn + k(sizeof(prime)))
    while (n > 1)
    {
        if (n % prime[i])
        {
            i++;
            continue;
        }
        primeFactorization[prime[i]]++;
        n /= prime[i];
    }

    for (auto [key, value] : primeFactorization)
        cout << key << " -> " << value << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}