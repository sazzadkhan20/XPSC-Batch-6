/**
 *    author:  sazzad
 *    created: 24.06.2025 04:24:22
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    int totalXOR = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        totalXOR ^= x;
    }
    if (totalXOR != 0 && n % 2 == 0)
        totalXOR = -1;
    cout << totalXOR << '\n';
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