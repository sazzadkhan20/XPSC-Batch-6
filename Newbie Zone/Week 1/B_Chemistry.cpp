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
        string s;
        cin >> n >> k >> s;
        int freq[26] = {0};
        bool flag = false;
        vector<int> v;
        for (char x : s)
        {
            int index = x - 97;
            freq[index]++;
        }
        for (int i = 0; i < 26; i++)
            if (freq[i] != 0)
                v.push_back(freq[i]);
        sort(v.begin(), v.end());
        int p = k;
        // Convert from odd to Even
        for (int i = 0; i < v.size(); i++)
        {
            if (k > 0 && v[i] % 2 != 0)
            {
                v[i]--;
                k--;
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (k >= v[i])
            {
                k -= v[i];
                v[i] = 0;
            }
            else
            {
                v[i] -= k;
                k = 0;
                break;
            }
        }
        int val = n - p;
        int oddCount = 0;
        for (int x : v)
            if (x % 2 != 0)
                oddCount++;
        if (val % 2 != 0 && oddCount == 1)
            cout << "YES\n";
        else if (val % 2 == 0 && oddCount == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}