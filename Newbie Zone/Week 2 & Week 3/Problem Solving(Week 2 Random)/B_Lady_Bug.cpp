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
        int n;
        string a, b;
        cin >> n >> a >> b;
        int aEvenOneCount = 0, aOddOneCount = 0,
            bEvenZeroCount = 0, bOddZeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] == '1')
                    aEvenOneCount++;
                if (b[i] == '0')
                    bEvenZeroCount++;
            }
            else
            {
                if (a[i] == '1')
                    aOddOneCount++;
                if (b[i] == '0')
                    bOddZeroCount++;
            }
        }
        // cout << aEvenOneCount << ' ' << aOddOneCount << '\n';
        // cout << bEvenZeroCount << ' ' << bOddZeroCount << '\n';
        if (aEvenOneCount > bOddZeroCount ||
            aOddOneCount > bEvenZeroCount)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}
