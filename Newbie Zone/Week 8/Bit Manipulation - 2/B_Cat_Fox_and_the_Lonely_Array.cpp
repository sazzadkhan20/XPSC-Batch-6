/**
 *    author:  sazzad
 *    created: 09.07.2025 05:03:58
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
    vector<int> v(n), bits(20, 0);
    int totalOR = 0, tempOR = 0;
    int k = 0, i = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        totalOR |= v[i];
    }
    while (i < n)
    {
        for (int k = 0; k <= __lg(v[i]); k++)
        {
            if (((v[i] >> k) & 1))
            {
                bits[k]++;
                if (bits[k] == 1)
                    tempOR += (1 << k);
            }
        }
        i++;
        if (tempOR == totalOR)
        {
            k = i - j; // Window Size
            for (int k = 0; k <= __lg(v[j]); k++)
            {
                if (((v[j] >> k) & 1))
                {
                    bits[k]--;
                    if (bits[k] == 0)
                        tempOR -= (1 << k);
                }
            }
            j++;
        }
        else if (i == n)
        {
            k = i - j + 1;
        }
    }
    cout << k << '\n';
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