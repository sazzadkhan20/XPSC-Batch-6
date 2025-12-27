/**
 *    author:  sazzad
 *    created: 18.07.2025 00:52:50
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define nl cout << '\n'
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    ll totalTime = 0;
    int maxTime = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        maxTime = max(maxTime, x);
        totalTime += x;
    }
    if (maxTime > totalTime - maxTime)
        cout << 2 * maxTime;
    else
        cout << totalTime;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}