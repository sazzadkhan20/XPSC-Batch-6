/**
 *    author:  sazzad
 *    created: 26.10.2025 03:08:18
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

// Range of Numbers all Divisors O(n*loglog(n))
vector<vector<int>> all_divisors(int n)
{
    vector<vector<int>> divisors(n + 1);
    for (int i = 1; i <= n; i++)
        for (int k = i; k <= n; k += i)
            divisors[k].push_back(i);
    return divisors;
}

void solve()
{
    int n;
    cin >> n;
    int mxN = 1e6;
    vector<vector<int>> divisors = all_divisors(mxN);
    while (n--)
    {
        int x;
        cin >> x;
        cout << divisors[x].size();
        nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}

// One Process------

// /**
//  *    author:  sazzad
//  *    created: 25.10.2025 15:08:55
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

// vector<int> all_divisors(int n)
// {
//     vector<int> divisors(n, 0);
//     for (int i = 2; i <= n; i++)
//     {
//         if (!divisors[i])
//         {
//             for (int k = i + i; k <= n; k += i)
//             {
//                 divisors[k]++;
//                 divisors[k] += divisors[k / i];
//             }
//         }
//     }
//     return divisors;
// }

// void solve()
// {
//     int n;
//     cin >> n;
//     int idx = 1e6 + 1;
//     vector<int> divisors = all_divisors(idx);
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         if (x == 1)
//             cout << 1;
//         else
//             cout << divisors[x] + 2;
//         nl;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();
// }