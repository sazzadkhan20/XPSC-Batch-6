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
        int n, s, sum = 0, i = 0, j = 0,
                  p = 0, q = 0, higestSegment = INT_MIN;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        // Variable Size Sliding Window
        while (i < n)
        {
            sum += v[i];
            if (sum == s)
            {
                if (higestSegment < i - j + 1)
                {
                    higestSegment = i - j + 1;
                    p = j, q = i;
                }
            }
            else if (sum > s)
            {
                while (sum > s)
                {
                    sum -= v[j];
                    j++;
                }
                if (higestSegment < i - j + 1)
                {
                    higestSegment = i - j + 1;
                    p = j, q = i;
                }
            }
            i++;
        }
        if (higestSegment == INT_MIN)
        {
            cout << -1 << '\n';
        }
        else
        {
            q = n - q - 1;
            cout << p + q << '\n';
        }
    }
}