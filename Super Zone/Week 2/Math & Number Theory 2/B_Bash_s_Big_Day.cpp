/**
 *    author:  sazzad
 *    created: 13.11.2025 21:10:50
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
    map<int, int> primeCount;
    int maxCount = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (ll i = 2; i * i <= x; i++)
        {
            bool flag = false;
            while (!(x % i))
            {
                flag = true;
                x /= i;
            }
            if (flag)
                primeCount[i]++;
        }
        if (x > 1)
            primeCount[x]++;
    }
    for (pa count : primeCount)
        maxCount = max(maxCount, count.second);
    cout << maxCount << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}

// Naive Approach

// /**
//  *    author:  sazzad
//  *    created: 13.11.2025 21:10:50
//  **/
// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long int
// #define pa pair<int, int>
// #define pa2 pair<ll, ll>
// #define pa3 pair<ll, int>
// #define nl cout << '\n'
// const int MOD = 1e9 + 7;
// const int N = 1e5 + 5;

// vector<int> seive()
// {
//     int n = 1e5 + 1;
//     vector<bool> allPrime(n, true);
//     vector<int> prime;
//     for (int i = 2; i * i <= n; i++)
//         if (allPrime[i])
//             for (int k = i + i; k <= n; k += i)
//                 allPrime[k] = false;
//     for (int i = 2; i <= n; i++)
//         if (allPrime[i])
//             prime.push_back(i);
//     return prime;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> prime = seive();
//     vector<int> v(n);
//     int maxCount = 1;
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     for (int i = 0; i < prime.size(); i++)
//     {
//         int count = 0;
//         for (int k = 0; k < n; k++)
//         {
//             if (!(v[k] % prime[i]))
//                 count++;
//         }
//         maxCount = max(maxCount, count);
//     }
//     cout << maxCount << '\n';
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();
// }