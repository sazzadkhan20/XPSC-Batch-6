/**
 *    author:  sazzad
 *    created: 09.07.2025 00:22:12
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n, k;
    string color;
    cin >> n >> k >> color;
    vector<int> v(26, 0);
    bool flag = false;
    for (int i = 0; i < color.length(); i++)
    {
        int idx = color[i] - 'a';
        v[idx]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > k)
        {
            cout << "NO\n";
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}