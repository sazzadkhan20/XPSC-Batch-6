#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll val = v[n - 2];
        for (int i = 0; i < n - 2; i++)
        {
            val = val - v[i];
        }
        cout << v[n - 1] - val << '\n';
    }
}