// Another Way Given Below

/**
 *    author:  sazzad
 *    created: 02.11.2025 00:36:27
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

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (!(n % i))
            return false;
    return true;
}

bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return x * x == n;
}

void solve()
{
    int n;
    cin >> n;

    while (n--)
    {
        ll x;
        cin >> x;
        if (isPerfectSquare(x) && isPrime(sqrtl(x)))
            cout << "YES";
        else
            cout << "NO";
        nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}

// Another Way---

//  /**
//   *    author:  sazzad
//   *    created: 02.11.2025 00:36:27
//   **/
//  #include <bits/stdc++.h>

// using namespace std;

// #define ll long long int
// #define pa pair<int, int>
// #define pa2 pair<ll, ll>
// #define pa3 pair<ll, int>
// #define nl cout << '\n'
// const int MOD = 1e9 + 7;
// const int N = 1e6 + 5;

// map<ll, bool> seive()
// {
//     vector<int> prime(N, true);
//     map<ll, bool> mp;
//     for (ll i = 2; i * i < N; i++)
//     {
//         if (prime[i])
//             for (int k = i + i; k < N; k += i)
//                 prime[k] = false;
//     }

//     for (int i = 2; i < N; i++)
//         if (prime[i])
//             mp[1LL * i * i] = true;
//     return mp;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     map<ll, bool> mp = seive();

//     while (n--)
//     {
//         ll x;
//         cin >> x;
//         if (mp.find(x) != mp.end())
//             cout << "YES";
//         else
//             cout << "NO";
//         nl;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();
// }