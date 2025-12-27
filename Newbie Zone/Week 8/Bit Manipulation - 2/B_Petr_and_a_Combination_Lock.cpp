/**
 *    author:  sazzad
 *    created: 01.07.2025 01:21:34
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
    vector<int> v(n);
    int sum;
    bool flag = false;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int mask = 0; mask < (1 << n); mask++)
    {
        sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (((mask >> i) & 1))
                sum += v[i];
            else
                sum -= v[i];
        }
        if (sum % 360 == 0)
        {
            cout << "YES\n";
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}