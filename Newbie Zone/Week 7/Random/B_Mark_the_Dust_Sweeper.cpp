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
        long long totalValue = 0, countZero = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
                flag = true;
            if (i != n - 1)
            {
                totalValue += x;
            }
            if (x == 0 && flag && i != n - 1)
            {
                countZero++;
            }
        }
        cout << totalValue + countZero << '\n';
    }
}