/**
 *    author:  sazzad
 *    created: 08.08.2025 23:32:51
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
    cin >> n;
    vector<int> prefix_sum(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        prefix_sum[i] = sum;
    }
    cin >> q;
    while (q--)
    {
        int key;
        cin >> key;
        auto it = lower_bound(prefix_sum.begin(), prefix_sum.end(), key);
        cout << (it - prefix_sum.begin()) + 1;
        nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}