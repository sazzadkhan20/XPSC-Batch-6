// Time Complexity -- O(n*sqrt(n))

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
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    map<int, int> primeFactorization;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (ll k = 2; k * k <= x; k++)
        {
            while (x % k == 0)
            {
                primeFactorization[k]++;
                x /= k;
            }
        }
        if (x > 1)
            primeFactorization[x]++;
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