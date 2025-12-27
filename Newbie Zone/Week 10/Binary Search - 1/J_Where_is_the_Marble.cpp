/**
 *    author:  sazzad
 *    created: 09.08.2025 21:52:08
 **/
#include <bits/stdc++.h>

using namespace std;

int index(vector<int> &v, int key)
{
    int l = 0, r = v.size() - 1;
    int indx = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == key)
        {
            indx = mid + 1;
            r = mid - 1;
        }
        else if (v[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return indx;
}

void solve()
{
    int testCase = 66;
    for (int i = 1; i <= testCase; i++)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
        {
            return;
        }
        cout << "CASE# " << i << ":\n";
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        while (q--)
        {
            int key;
            cin >> key;
            int ans = index(v, key);
            if (ans == -1)
            {
                cout << key << " not found\n";
            }
            else
            {
                cout << key << " found at " << ans << '\n';
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}