/**
 *    author:  sazzad
 *    created: 25.07.2025 06:04:02
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

// One Process
// int power(int a, int b)
// {
//     int ans = 1;
//     for (int i = 0; i <= __lg(b); i++)
//     {
//         if (((b >> i) & 1))
//             ans = (1LL * ans % MOD * a % MOD) % MOD;
//         a = (1LL * a % MOD * a % MOD) % MOD;
//     }
//     return ans;
// }

// Another Process O(logn)
// int power(int a, int b)
// {
//     int ans = 1;
//     while (b)
//     {
//         if (b & 1)
//             ans = (1LL * ans % MOD * a % MOD) % MOD;
//         a = (1LL * a % MOD * a % MOD) % MOD;
//         // b /= 2;
//         b >>= 1; // b = b >> 1;
//     }
//     return ans;
// }

// Another Process O(logn)
int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b & 1)
        return (1LL * a % MOD * power((1LL * a % MOD * a % MOD) % MOD, b / 2) % MOD) % MOD;
    return power((1LL * a % MOD * a % MOD) % MOD, b / 2) % MOD;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
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