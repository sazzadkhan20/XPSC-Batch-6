#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll coins_Count(ll n)
{
    if (n <= 3)
        return 1;
    return 2 * coins_Count(n / 4);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        ll n;
        cin >> n;
        // cout << coins_Count(n) << '\n';
        ll increment = 1;
        while (n > 3)
        {
            n = n / 4;
            increment *= 2;
        }
        cout << increment << '\n';
    }
}