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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        if (a * n + b < s)
        {
            cout << "NO\n";
        }
        else if (a * n + b == s || a * n == s || b == s || (n == 1 && a + b > s))
        {
            cout << "YES\n";
        }
        else
        {
            if (a * n > s)
            {
                ll val = s / n;
                if (val <= a && val * n + b >= s)
                {
                    cout << "YES\n";
                }
                else
                {
                    // cout << "asi\n";
                    cout << "NO\n";
                }
            }
            else
            {
                if (a * n + b > s)
                {
                    cout << "YES\n";
                }
                else
                {
                    // cout << "asi\n";
                    cout << "NO\n";
                }
            }
        }
    }
}