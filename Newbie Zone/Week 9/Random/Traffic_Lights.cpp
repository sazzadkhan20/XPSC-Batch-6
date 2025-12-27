/**
 *    author:  sazzad
 *    created: 01.08.2025 19:51:13
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define pa3 pair<ll, int>
#define nl cout << '\n'
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

class Compare
{
public:
    bool operator()(pa l, pa r)
    {
        return (l.second - l.first) < (r.second - r.first);
    }
};

void solve()
{
    int n, x;
    cin >> x >> n;
    map<int, bool> mp;
    multiset<int> ms;
    mp[0] = true;
    mp[x] = true;
    ms.insert(x);
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        auto it = mp.upper_bound(p);
        int v = it->first;
        auto it2 = ms.find(v - (--it)->first);
        ms.erase(it2);
        ms.insert(v - p);
        ms.insert(p - it->first);
        mp[p] = true;
        cout << *(--ms.end()) << ' ';
    }
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}