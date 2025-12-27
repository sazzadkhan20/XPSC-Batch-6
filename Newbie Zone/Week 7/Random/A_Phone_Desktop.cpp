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
        int x, y;
        cin >> x >> y;
        int fourCell = y / 2;
        int sevenCell = fourCell * 7;
        if (y % 2 != 0)
        {
            x += 4;
        }
        if (sevenCell >= x)
        {
            if (y % 2 != 0)
                fourCell++;
            cout << fourCell << '\n';
        }
        else
        {
            x -= sevenCell;
            int cell = x / 15;
            if (x % 15 != 0)
            {
                cell++;
            }
            cout << fourCell + cell << '\n';
        }
    }
}