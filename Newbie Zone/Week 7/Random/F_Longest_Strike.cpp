#include <bits/stdc++.h>
#define ll long long int
#define pa pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, l = -1, r = -1, diff = -1;
        cin >> n >> k;
        vector<int> v;
        map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count[x]++;
        }
        for (auto [key, value] : count)
        {
            if (value >= k)
            {
                v.push_back(key);
            }
        }
        int i = 0;
        n = v.size() - 1;
        while (i < n)
        {
            if (v[i + 1] - v[i] == 1)
            {
                int tl = v[i], tr;
                while (i < n && v[i + 1] - v[i] == 1)
                {
                    tr = v[i + 1];
                    i++;
                }
                i--;
                if (tr - tl > diff)
                {
                    diff = tr - tl;
                    l = tl, r = tr;
                }
            }
            i++;
        }
        if (l != -1 && r != -1)
        {
            cout << l << ' ' << r << '\n';
        }
        else
        {
            if (n >= 0)
            {
                cout << v[0] << ' ' << v[0] << '\n';
            }
            else
            {
                cout << l << '\n';
            }
        }
    }
}