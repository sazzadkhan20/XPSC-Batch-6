/**
 *    author:  sazzad
 *    created: 07.07.2025 20:14:11
 **/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pa pair<int, int>
#define pa2 pair<ll, ll>
const int N = 1e5 + 5;

void solve()
{
    string num;
    cin >> num;
    int n = num.length();
    ll ans = 1;
    for (int i = 1; i < n; i++)
        ans += (1 << i);
    reverse(num.begin(), num.end());
    for (int i = 0; i < (1 << n); i++)
    {
        bool flag = true;
        for (int k = 0; k < n; k++)
        {
            if (!((i >> k) & 1) && num[k] == '7' ||
                ((i >> k) & 1) && num[k] == '4')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans += i;
            break;
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}