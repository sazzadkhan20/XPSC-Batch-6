/**
 *    author:  sazzad
 *    created: 10.07.2025 02:05:45
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
    int evenDivisor = 0, oddDivisor = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                evenDivisor++;
            else
                oddDivisor++;
        }
    }
    if (evenDivisor == oddDivisor)
        cout << "yes";
    else
        cout << "no";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}