/**
 *    author:  sazzad
 *    created: 09.08.2025 22:10:36
 **/
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int key;
        cin >> key;
        auto it = lower_bound(v.begin(), v.end(), key);
        if (it == v.begin())
        {
            cout << "X ";
        }
        else
        {
            it--;
            cout << *it << ' ';
        }
        it = upper_bound(v.begin(), v.end(), key);
        if (it == v.end())
        {
            cout << "X";
        }
        else
        {
            cout << *it;
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}