#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5;

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
        int arr[N];
        int freq[N];
        memset(freq, 0, sizeof(freq));
        int repeaterCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (freq[arr[i]] > 0)
            {
                repeaterCount++;
            }
            freq[arr[i]]++;
        }
        int minOperation = 0;
        int i = 0;
        while (repeaterCount != 0)
        {
            minOperation++;
            if (freq[arr[i]] > 1)
            {
                freq[arr[i]]--;
                repeaterCount--;
            }
            i++;
        }
        cout << minOperation << '\n';
    }
}