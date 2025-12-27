/**
 *    author:  sazzad
 *    created: 25.06.2025 23:36:18
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

bool cmp(pa l, pa r)
{
    if (l.second == r.second)
        return l.first < r.first;
    return l.second < r.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pa> v(n);
    int movieCount = 1;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    sort(v.begin(), v.end(), cmp);
    int lastMovieEnd = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (lastMovieEnd <= v[i].first)
        {
            movieCount++;
            lastMovieEnd = v[i].second;
        }
    }
    cout << movieCount << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}