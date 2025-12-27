/**
 *    author:  sazzad
 *    created: 11.07.2025 23:47:28
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
#define nl cout << '\n'
const int N = 1e5 + 5;

void fun(int i, int n, bool flip)
{
    for (; i <= n; i++)
    {
        cout << flip;
    }
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    map<int, bool> mp;
    int minCount = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            minCount++;
        i++, j--;
    }
    fun(0, minCount - 1, false);
    if (n % 2 == 0)
    {
        bool flip = true;
        for (int i = minCount; i <= n - minCount; i++)
        {
            if (flip)
                cout << 1;
            else
                cout << 0;
            flip = !flip;
        }
    }
    else
        fun(minCount, n - minCount, true);
    fun(n - minCount + 1, n, false);
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