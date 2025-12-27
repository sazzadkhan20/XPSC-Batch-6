#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        ll n, coins;
        cin >> n >> coins;
        multiset<ll> ms;
        ll maximumNumTeleports = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ms.insert(x + i); // Total Coins
        }
        for (ll x : ms)
        {
            if (x > coins)
            {
                break;
            }
            maximumNumTeleports++;
            coins -= x;
        }
        cout << maximumNumTeleports << '\n';
    }
}