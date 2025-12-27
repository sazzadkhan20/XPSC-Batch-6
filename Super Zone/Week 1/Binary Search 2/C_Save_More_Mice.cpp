/**
 *    author:  sazzad
 *    created: 06.09.2025 20:12:48
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
    vector<int> v(k);
    int count = 1, steps;
    for (int i = 0; i < k; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    steps = n - v[0];
    for (int i = 1; i < k; i++)
    {
        if (steps >= v[i])
            break;
        else
        {
            steps += n - v[i];
            count++;
        }
    }
    cout << count << '\n';
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