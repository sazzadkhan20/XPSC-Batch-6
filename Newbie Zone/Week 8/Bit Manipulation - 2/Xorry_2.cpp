/**
 *    author:  sazzad
 *    created: 03.07.2025 21:47:13
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
    int highestBit = __lg(n);
    n -= (1LL << highestBit);
    int secondHighestBit = __lg(n);
    int offbits = 0;
    for (int i = 0; i < secondHighestBit; i++)
    {
        if (((n >> i) & 1) == 0)
        {
            offbits++;
        }
    }
    cout << (1LL << offbits) << '\n';
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