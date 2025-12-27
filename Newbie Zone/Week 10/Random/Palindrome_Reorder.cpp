/**
 *    author:  sazzad
 *    created: 09.08.2025 22:56:54
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

int validity_check(vector<int> &v, bool flag)
{
    int oddCount = 0;
    int oddIndex = 0;
    for (int i = 0; i < 26; i++)
        if (v[i] % 2 == 1)
        {
            oddCount++;
            oddIndex = i + 1;
        }
    if ((!flag && oddCount == 0) ||
        (flag && oddCount == 1))
        return oddIndex;
    return -1;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v(26, 0);
    for (int i = 0; i < n; i++)
    {
        int indx = s[i] - 'A';
        v[indx]++;
    }
    int indx = validity_check(v, n % 2);
    if (indx == -1)
        cout << "NO SOLUTION";
    else
    {
        int i = 0;
        while (i < 26)
        {
            char c = 'A' + i;
            int val = v[i] / 2;
            while (val--)
            {
                v[i]--;
                cout << c;
            }
            i++;
        }
        if (indx > 0)
        {
            indx--;
            v[indx]--;
            char c = 'A' + indx;
            cout << c;
        }
        i = 25;
        while (i >= 0)
        {
            char c = 'A' + i;
            while (v[i]--)
            {
                cout << c;
            }
            i--;
        }
    }
    nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}