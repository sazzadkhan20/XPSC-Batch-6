/**
 *    author:  sazzad
 *    created: 08.08.2025 08:15:37
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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<ll> prefix_sum(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    prefix_sum[0] = v[0];
    for (int i = 1; i < n; i++)
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    while (q--)
    {
        int key;
        cin >> key;
        int ans = -1;
        auto it = lower_bound(prefix_sum.begin(), prefix_sum.end(), key); // O(logn)
        if (it != prefix_sum.end())
            ans = it - prefix_sum.begin() + 1;
        cout << ans;
        nl;
    }
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

// /**
//  *    author:  sazzad
//  *    created: 08.08.2025 08:15:37
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

// void solve()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> v(n);
//     vector<ll> prefix_sum(n);
//     ll sum = 0;
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     sort(v.rbegin(), v.rend());
//     prefix_sum[0] = v[0];
//     for (int i = 1; i < n; i++)
//         prefix_sum[i] = prefix_sum[i - 1] + v[i];
//     while (q--)
//     {
//         int key;
//         cin >> key;
//         int ans = -1;
//         int l = 0, r = n - 1;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (key <= prefix_sum[mid])
//             {
//                 ans = mid + 1;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }
//         cout << ans;
//         nl;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         solve();
//     }
// }