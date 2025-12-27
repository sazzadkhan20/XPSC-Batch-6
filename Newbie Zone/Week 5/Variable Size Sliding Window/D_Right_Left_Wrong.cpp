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
        int n;
        ll totalScore = 0, tempScore = 0;
        string s;
        cin >> n;
        vector<int> v(n);
        vector<ll> prefixSum(n);
        int i = 0, j = n - 1;
        prefixSum[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
                prefixSum[i] += v[i];
            else
                prefixSum[i] = prefixSum[i - 1] + v[i];
        }
        cin >> s;
        while (i < j)
        {
            if (s[i] == 'L' && s[j] == 'R')
            {
                if (i != 0)
                    totalScore += (prefixSum[j] - prefixSum[i - 1]);
                else
                    totalScore += prefixSum[j];
                i++, j--;
            }
            else if (s[i] == 'R' && s[j] == 'L')
            {
                i++, j--;
            }
            else if (s[i] == 'R')
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        cout << totalScore << '\n';
    }
}