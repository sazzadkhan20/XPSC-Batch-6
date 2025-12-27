/**
 *    author:  sazzad
 *    created: 09.11.2025 23:27:43
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
    int count = 0;
    for (int i = 6; i <= n; i++)
    {
        map<int, int> map;
        int val = i;
        for (int k = 2; k * k <= val; k++)
        {
            while (val % k == 0)
            {
                map[k]++;
                val /= k;
            }
        }
        if (val > 1)
            map[val]++;
        if (map.size() == 2)
            count++;
    }
    cout << count;
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}