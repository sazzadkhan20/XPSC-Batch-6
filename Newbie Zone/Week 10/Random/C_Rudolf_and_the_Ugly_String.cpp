/**
 *    author:  sazzad
 *    created: 13.08.2025 23:46:27
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

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    int i = 0;
    while (i < n)
    {
        if (i + 2 < n && s[i] == 'm' &&
            s[i + 1] == 'a' && s[i + 2] == 'p')
        {
            count++;
            i += 2;
        }
        else if (i + 2 < n && s[i] == 'p' &&
                 s[i + 1] == 'i' && s[i + 2] == 'e')
        {
            count++;
            i += 2;
        }
        i++;
    }
    cout << count;
    nl;
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