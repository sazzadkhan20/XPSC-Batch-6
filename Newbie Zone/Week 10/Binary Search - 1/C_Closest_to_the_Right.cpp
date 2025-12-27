/**
 *    author:  sazzad
 *    created: 05.08.2025 23:27:34
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1;
        int ans = n + 1;
        while (l <= r)
        {
            // int mid = (l + r) / 2;
            int mid = l + (r - l) / 2;
            if (key <= v[mid])
            {
                ans = mid + 1;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans;
        nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}