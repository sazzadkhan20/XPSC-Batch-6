#include <bits/stdc++.h>

using namespace std;

int min_operation(string strip, int k)
{
    int minOperation = 0;
    int count = 0;
    int n = strip.size(), i = 0, j = 0;
    // Fixed Size Sliding Window
    while (i < n)
    {
        if (strip[i] == 'B')
            count++;
        if (i - j + 1 == k) // Window Hit
        {
            // Decision
            if (strip[j] == 'B' && count != 0)
            {
                count = 0;
                j = i;
                minOperation++;
            }
            j++;
        }
        i++;
    }
    if (count != 0)
        minOperation++;
    return minOperation;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, k;
        string strip;
        cin >> n >> k >> strip;
        cout << min_operation(strip, k) << '\n';
    }
}