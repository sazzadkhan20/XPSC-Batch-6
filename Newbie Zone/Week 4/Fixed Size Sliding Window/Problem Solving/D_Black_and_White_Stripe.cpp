#include <bits/stdc++.h>

using namespace std;

int min_cell(string stripe, int k)
{
    int minLength = INT_MAX;
    int count = 0;
    int n = stripe.length(), i = 0, j = 0;
    // Fixed Size Sliding Window
    while (i < n)
    {
        if (stripe[i] == 'W')
        {
            count++;
        }
        if (i - j + 1 == k) // Window Hit
        {
            // Decision
            minLength = min(minLength, count);
            // Remove Previous Window Property
            if (stripe[j] == 'W')
            {
                count--;
            }
            j++;
        }
        i++;
    }
    return minLength;
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
        string stripe;
        cin >> n >> k >> stripe;
        cout << min_cell(stripe, k) << '\n';
    }
}