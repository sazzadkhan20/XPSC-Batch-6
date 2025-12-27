#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int highestFreq = INT_MIN, minOperation = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            highestFreq = max(mp[x], highestFreq);
        }
        count = highestFreq;
        while (highestFreq < n)
        {
            // for One Copy Array
            minOperation++;
            if (n - count >= highestFreq)
            {
                minOperation += highestFreq;
                count += highestFreq;
            }
            else
            {
                minOperation = minOperation + n - highestFreq;
                count = count + n - highestFreq;
            }
            highestFreq *= 2;
        }
        cout << minOperation << '\n';
    }
}