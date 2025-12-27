// Not Recommended Time Complexity Too High -- O(nloglogn + k(sizeof(prime(10^5))) * n)
// Best use SPF(Smallest Prime Factor) Method
// SPF Time Complexity -- O(n*sqrt(n))

/**
 *    author:  sazzad
 *    created: 02.11.2025 00:07:17
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int MOD = 1e9 + 7;
const int N = 1e6 + 5;

vector<int> seive()
{
    vector<bool> prime(N, true);
    vector<int> allPrime;
    for (ll i = 2; i * i < N; i++)
        if (prime[i])
            for (int k = i + i; k < N; k += i)
                prime[k] = false;
    for (int i = 2; i < N; i++)
        if (prime[i])
            allPrime.push_back(i);
    return allPrime;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> prime = seive();
    map<int, int> primeFactorization;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int k = 0;
        while (x > 1)
        {
            if (x % prime[k])
            {
                k++;
                continue;
            }
            primeFactorization[prime[k]]++;
            x /= prime[k];
        }
    }
    for (auto p : primeFactorization)
    {
        if (p.second % n)
        {
            flag = false;
            break;
        }
    }
    (flag) ? cout << "YES" : cout << "NO";
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