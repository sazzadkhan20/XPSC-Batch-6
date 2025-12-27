// Two Pointer Technique
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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int i = 1, j = n, currentMin = 1, currentMax = n;
        bool flag = false;
        while (i < j)
        {
            if (v[i] != currentMin && v[i] != currentMax &&
                v[j] != currentMin && v[j] != currentMax)
            {
                flag = true;
                break;
            }
            if (v[i] == currentMin)
            {
                currentMin++;
                i++;
            }
            else if (v[i] == currentMax)
            {
                currentMax--;
                i++;
            }
            if (v[j] == currentMin)
            {
                currentMin++;
                j--;
            }
            else if (v[j] == currentMax)
            {
                currentMax--;
                j--;
            }
        }
        if (flag)
        {
            cout << i << " " << j << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}