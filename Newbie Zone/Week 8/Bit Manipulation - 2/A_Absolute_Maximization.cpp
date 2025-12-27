/**
 *    author:  sazzad
 *    created: 07.07.2025 23:17:52
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(10, 0);
    int maxValue = 0, minValue = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int k = __lg(x); k >= 0; k--)
        {
            if (((x >> k) & 1))
                v[k]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (v[i])
        {
            maxValue += (1 << i);
            v[i]--;
        }
        if (v[i] == n - 1)
            minValue += (1 << i);
    }
    cout << maxValue - minValue << '\n';
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