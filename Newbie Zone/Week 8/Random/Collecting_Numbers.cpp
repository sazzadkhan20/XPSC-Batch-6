/**
 *    author:  sazzad
 *    created: 26.06.2025 23:43:16
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
    map<int, int> count;
    int totalRounds = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x] = i;
    }
    auto it = count.begin();
    int index = it->second;
    it++;
    while (it != count.end())
    {
        if (it->second < index)
        {
            totalRounds++;
        }
        index = it->second;
        it++;
    }
    cout << totalRounds << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}