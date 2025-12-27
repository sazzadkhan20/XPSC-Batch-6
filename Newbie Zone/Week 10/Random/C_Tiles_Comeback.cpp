/**
 *    author:  sazzad
 *    created: 12.08.2025 22:44:56
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int i = 0, j = n - 1;
    int count = 0;
    while (i < n)
    {
        if (v[i] == v[0])
            count++;
        if (count == k)
            break;
        i++;
    }
    if (count == k && (i == n - 1 || v[0] == v[n - 1]))
        cout << "YES";
    else if (count != k)
        cout << "NO";
    else
    {
        count = 0;
        while (j > i)
        {
            if (v[j] == v[n - 1])
                count++;
            if (count == k)
                break;
            j--;
        }
        if (count == k)
            cout << "YES";
        else
            cout << "NO";
    }
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