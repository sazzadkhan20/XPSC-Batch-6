/**
 *    author:  sazzad
 *    created: 13.11.2025 05:47:01
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

int max_count(map<int, int> &mp, int n)
{
    int maxCount = 0;
    for (int i = 1; i <= n; i++)
    {
        int tempCount = 0;
        for (int k = 1; k * k <= i; k++)
        {
            if (i % k == 0)
            {
                if (mp.find(k) != mp.end())
                    tempCount += mp[k];
                if (k != i / k && mp.find(i / k) != mp.end())
                    tempCount += mp[i / k];
            }
        }
        maxCount = max(maxCount, tempCount);
    }
    return maxCount;
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= n)
            mp[x]++;
    }
    cout << max_count(mp, n) << '\n';
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