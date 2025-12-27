#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int zeroCount = 0, oneCount = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                zeroCount++;
            else if (x == 1)
                oneCount++;
        }
        if (zeroCount <= (n + 1) / 2)
        {
            cout << 0 << '\n';
        }
        else
        {
            if (oneCount != 0 && zeroCount + oneCount == n)
            {

                cout << 2 << '\n';
            }
            else
            {
                cout << 1 << '\n';
            }
        }
    }
}