/**
 *    author:  sazzad
 *    created: 27.06.2025 23:00:51
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
    vector<int> v(n);
    map<int, int> mp;
    int i = 0, j = 0;
    int longestSequence = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (i < n)
    {
        mp[v[i]]++;
        if (mp.size() == i - j + 1)
        {
            longestSequence = max(longestSequence, i - j + 1);
        }
        else
        {
            mp[v[j]]--;
            if (mp[v[j]] == 0)
                mp.erase(v[j]);
            j++;
        }
        i++;
    }
    cout << longestSequence << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}