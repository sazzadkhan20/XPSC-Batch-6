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
        int n, m, q;
        cin >> n >> m >> q;
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        while (q--)
        {
            int devidCell;
            cin >> devidCell;
            int a, b;
            auto it = s.upper_bound(devidCell);
            if (it == s.begin())
            {
                a = 0;
                b = *it;
            }
            else if (it == s.end())
            {
                b = n + 1;
                it--;
                a = *it;
            }
            else
            {
                b = *it;
                it--;
                a = *it;
            }
            // cout << a << " " << b << endl;
            if (a == 0)
            {
                cout << b - 1 << '\n';
            }
            else if (b == n + 1)
            {
                cout << b - a - 1 << '\n';
            }
            else
            {
                int diva = (b - a) / 2;
                cout << diva << '\n';
            }
        }
    }
}