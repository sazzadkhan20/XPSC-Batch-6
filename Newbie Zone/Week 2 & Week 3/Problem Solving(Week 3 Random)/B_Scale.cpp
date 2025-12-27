#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, k;
        cin >> n >> k;
        char gird[N][N];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> gird[i][j];
            }
        }
        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                cout << gird[i][j];
            }
            cout << '\n';
        }
    }
}