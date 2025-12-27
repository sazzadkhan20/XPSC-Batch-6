/**
 *    author:  sazzad
 *    created: 07.08.2025 06:49:32
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

int min_max_index(vector<int> &v, int key, int l, int r, bool flag)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (flag)
        {
            if (v[mid] >= key)
            {
                ans = mid + 1;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        else
        {
            if (v[mid] <= key)
            {
                ans = mid + 1;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
    }
    return ans;
}

void solve()
{
    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cin >> q;
    while (q--)
    {
        int k, p;
        cin >> k >> p;
        int r = min_max_index(v, p, 0, n - 1, false);
        int l = min_max_index(v, k, 0, r - 1, true);
        if (l == -1)
            cout << 0 << ' ';
        else
            cout << r - l + 1 << ' ';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}

// /**
//  *    author:  sazzad
//  *    created: 07.08.2025 06:49:32
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
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     sort(v.begin(), v.end());
//     cin >> q;
//     while (q--)
//     {
//         int k, p;
//         cin >> k >> p;
//         if (v[0] > p || v[n - 1] < k)
//         {
//             cout << 0 << ' ';
//             continue;
//         }
//         int rIndex = -1;
//         int l = 0, r = n - 1;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (v[mid] <= p)
//             {
//                 rIndex = mid;
//                 l = mid + 1;
//             }
//             else
//                 r = mid - 1;
//         }
//         int lIndex = -1;
//         l = 0, r = rIndex;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (v[mid] >= k)
//             {
//                 lIndex = mid;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }
//         if (lIndex == -1)
//             cout << 0 << ' ';
//         else
//             cout << rIndex - lIndex + 1 << ' ';
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     solve();
// }