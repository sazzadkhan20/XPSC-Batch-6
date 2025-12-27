/**
 *    author:  sazzad
 *    created: 23.06.2025 22:49:28
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
    vector<int> a, b(n - 1);
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    a.push_back(b[0]);
    for (int i = 0; i < n - 2; i++)
    {
        a.push_back(b[i] | b[i + 1]);
    }
    a.push_back(b[n - 2]);
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i] & a[i + 1]) != b[i])
        {
            flag = false;
            break;
        }
    }
    if (!flag)
    {
        cout << -1;
    }
    else
    {
        for (int val : a)
        {
            cout << val << ' ';
        }
    }
    cout << '\n';
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