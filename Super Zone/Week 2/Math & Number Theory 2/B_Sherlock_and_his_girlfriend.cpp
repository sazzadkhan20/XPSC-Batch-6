/**
 *    author:  sazzad
 *    created: 13.11.2025 19:54:57
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

vector<int> seive(int n)
{
    vector<int> prime(n+1, 1);
    for (ll i = 2; i * i <= n; i++)
        if (prime[i] == 1)
            for (int k = i + i; k <= n; k += i)
                prime[k] = 2;
    return prime;
}

void solve()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << 1 << '\n';
        while (n--)
            cout << 1 << ' ';
    }
    else
    {
        n++;
        vector<int> ans = seive(n);
        cout << 2 << '\n';
        for (int i = 2; i <= n; i++)
            cout << ans[i] << ' ';
    }
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}