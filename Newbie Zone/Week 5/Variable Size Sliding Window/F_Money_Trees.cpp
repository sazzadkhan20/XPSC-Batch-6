#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, k, i = 0, j = 0, longestSubArrayLength = INT_MIN;
        cin >> n >> k;
        vector<int> fruits(n), height(n);
        ll collectedFruits = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> fruits[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        while (i < n)
        {
            if (i == n - 1)
            {
                collectedFruits += fruits[i];
            }
            else if (height[i] % height[i + 1] == 0)
            {
                collectedFruits += fruits[i];
            }
            else
            {
                collectedFruits += fruits[i];
                if (collectedFruits <= k)
                {
                    longestSubArrayLength = max(longestSubArrayLength, i - j + 1);
                }
                collectedFruits = 0;
                j = i + 1;
                i++;
                continue;
            }
            if (collectedFruits <= k)
            {
                longestSubArrayLength = max(longestSubArrayLength, i - j + 1);
            }
            else
            {
                while (collectedFruits > k)
                {
                    collectedFruits -= fruits[j];
                    j++;
                }
                longestSubArrayLength = max(longestSubArrayLength, i - j + 1);
            }
            i++;
        }
        cout << longestSubArrayLength << '\n';
    }
}