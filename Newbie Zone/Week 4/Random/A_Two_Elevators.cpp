#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << 1 << '\n';
        }
        else
        {
            int val = abs(b - c);
            val += abs(c - 1);
            if (val < abs(a - 1))
            {
                cout << 2 << '\n';
            }
            else if (val > abs(a - 1))
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 3 << '\n';
            }
        }
    }
}