/**
 *    author:  sazzad
 *    created: 08.08.2025 06:23:25
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (auto val : v)
        cout << val << ' ';
    nl;
    int key;
    cin >> key;
    int ans = -1;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == key)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (v[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << ans;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}