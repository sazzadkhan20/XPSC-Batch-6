/**
 *    author:  sazzad
 *    created: 11.08.2025 11:25:30
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
    deque<int> dq(n), v(n + 1, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
        v[dq[i]] = 0;
    }
    if (k % (n + 1) == 0)
        for (int i = 0; i < n; i++)
            cout << dq[i] << ' ';
    else
    {
        int index = k % (n + 1);
        auto it = find(v.begin(), v.end(), -1);
        dq.push_front(it - v.begin());
        index--;
        // cout << index;
        // nl;
        for (int i = index - 1; i >= 0; i--)
            cout
                << dq[n - i] << ' ';
        for (int i = 0; i < n - index; i++)
            cout << dq[i] << ' ';
    }
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