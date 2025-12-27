/**
 *    author:  sazzad
 *    created: 20.07.2025 23:03:11
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int N = 1e5 + 5;

bool cmp(pa3 l, pa3 r)
{
    return l.first < r.first;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pa3> v(n);
    bool flag = false;
    vector<int> t;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        v[i] = {val, i};
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        if (v[i].first < x)
        {
            ll sum = v[i].first;
            int p = i + 1, k = n - 1;
            while (p < k)
            {
                if (sum + v[p].first + v[k].first == x)
                {
                    t.push_back(v[i].second + 1);
                    t.push_back(v[p].second + 1);
                    t.push_back(v[k].second + 1);
                    flag = true;
                    break;
                }
                else if (sum + v[p].first + v[k].first > x)
                    k--;
                else
                    p++;
            }
            if (flag)
            {
                sort(t.begin(), t.end());
                for (auto val : t)
                    cout << val << ' ';
                break;
            }
        }
    }
    if (!flag)
        cout << "IMPOSSIBLE";
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}