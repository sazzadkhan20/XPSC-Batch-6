/**
 *    author:  sazzad
 *    created: 25.06.2025 22:57:24
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x]++;
    }
    while (m--)
    {
        int price;
        cin >> price;
        auto it = count.upper_bound(price);
        if (it != count.begin())
        {
            it--;
            int val = it->first;
            cout << val;
            count[val]--;
            if (count[val] == 0)
                count.erase(val);
        }
        else
            cout << -1;
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}