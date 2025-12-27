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
        int n, k;
        cin >> n >> k;
        int golds = 0, givenGolds = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x >= k)
            {
                golds += x;
            }
            else if (x == 0 && golds != 0)
            {
                givenGolds++;
                golds--;
            }
        }
        cout << givenGolds << '\n';
    }
}