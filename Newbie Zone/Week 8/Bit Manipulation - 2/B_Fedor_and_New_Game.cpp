/**
 *    author:  sazzad
 *    created: 06.07.2025 14:07:52
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    int friendsCount = 0;
    for (int i = 0; i <= m; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (!((v[m] >> j) & 1) && ((v[i] >> j) & 1) ||
                ((v[m] >> j) & 1) && !((v[i] >> j) & 1))
                count++;
        }
        if (count <= k)
        {
            friendsCount++;
        }
    }
    cout << friendsCount << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}