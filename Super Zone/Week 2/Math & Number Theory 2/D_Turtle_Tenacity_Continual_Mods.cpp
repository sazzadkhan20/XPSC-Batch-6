/**
 *    author:  sazzad
 *    created: 10.12.2025 09:39:47
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
    if (v[0] != v[1])
        cout << "YES";
    else
    {
        bool flag = false;
        for (int i = 2; i < n; i++)
        {
            if (v[i] % v[0] != 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
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