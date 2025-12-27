/**
 *    author:  sazzad
 *    created: 09.08.2025 14:05:53
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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < r)
            v.push_back(x);
    }
    sort(v.begin(), v.end());
    n = v.size();
    ll ans = 0;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (r - *it < *it)
            break;
        int lv, rv = r - *it;
        if (abs(*it - l) < *it)
            lv = *it;
        else
            lv = abs(*it - l);
        auto lIt = lower_bound(it + 1, v.end(), lv);
        auto rIt = upper_bound(it + 1, v.end(), rv);
        rIt--;
        if (lIt != v.end() && (lIt <= rIt))
            ans += (rIt - lIt + 1);
    }
    cout << ans;
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

// /**
//  *    author:  sazzad
//  *    created: 09.08.2025 14:05:53
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

// int min_index(vector<int> &v, int l, int r, int lv, int rv)
// {
//     int ans = -1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (v[mid] >= lv && v[mid] <= rv)
//         {
//             ans = mid;
//             r = mid - 1;
//         }
//         else if (v[mid] < lv)
//             l = mid + 1;
//         else
//             r = mid - 1;
//     }
//     return ans;
// }

// int max_index(vector<int> &v, int l, int r, int lv, int rv)
// {
//     int ans = -1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (v[mid] >= lv && v[mid] <= rv)
//         {
//             ans = mid;
//             l = mid + 1;
//         }
//         else if (v[mid] < lv)
//             l = mid + 1;
//         else
//             r = mid - 1;
//     }
//     return ans;
// }

// void solve()
// {
//     int n, l, r;
//     cin >> n >> l >> r;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         if (x < r)
//             v.push_back(x);
//     }
//     sort(v.begin(), v.end());
//     n = v.size();
//     ll ans = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (r - v[i] < v[i])
//             break;
//         int lv, rv = r - v[i];
//         if (abs(v[i] - l) < v[i])
//             lv = v[i];
//         else
//             lv = abs(v[i] - l);
//         int val1 = min_index(v, i + 1, n - 1, lv, rv);
//         int val2 = max_index(v, i + 1, n - 1, lv, rv);
//         if (val1 != -1 && val2 != -1)
//             ans += (val2 - val1) + 1;
//     }
//     cout << ans;
//     nl;
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