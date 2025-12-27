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
        cin >> n;
        int maxValue = INT_MIN, minValue = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            maxValue = max(maxValue, x);
            minValue = min(minValue, x);
        }
        n--;
        cout << n * (maxValue - minValue) << '\n';
    }
}