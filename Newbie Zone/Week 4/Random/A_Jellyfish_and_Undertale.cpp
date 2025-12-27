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
        ll a, b, n;
        cin >> a >> b >> n;
        ll totalTime = b;
        while (n--)
        {
            ll x;
            cin >> x;
            x += 1;
            if (x > a)
            {
                x = a - 1;
            }
            else
            {
                x--;
            }
            totalTime += x;
        }
        cout << totalTime << '\n';
    }
}