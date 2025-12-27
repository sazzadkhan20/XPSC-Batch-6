/**
 *    author:  sazzad
 *    created: 08.11.2025 00:45:47
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
    vector<int> v(n), ans(n, 0);
    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int color = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < 11; i++)
    {
        color++;
        bool flag = true;
        for (int k = 0; k < n; k++)
        {
            if (ans[k] == 0 && v[k] % prime[i] == 0)
            {
                ans[k] = color;
                flag = false;
            }
        }
        if (flag)
            color--;
    }
    cout << color << '\n';
    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
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