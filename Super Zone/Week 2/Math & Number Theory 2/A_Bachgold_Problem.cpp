/**
 *    author:  sazzad
 *    created: 10.11.2025 20:54:48
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
    if (n % 2)
    {
        n -= 3;
        cout << n / 2 + 1 << '\n'
             << 3 << ' ';
    }
    else
        cout << n / 2 << '\n';
    for (int i = 0; i < n / 2; i++)
        cout << 2 << ' ';
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}