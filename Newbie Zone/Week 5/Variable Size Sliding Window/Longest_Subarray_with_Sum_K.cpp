#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int longestSubarray(vector<int> &v, int k)
{
    map<ll, int> mp;
    int n = v.size(), i = 0, longestSubArrayLength = 0;
    ll sum = 0;
    while (i < n)
    {
        sum += v[i];
        if (sum == k)
        {
            longestSubArrayLength = i + 1;
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
        if (mp.find(sum - k) != mp.end())
        {
            longestSubArrayLength = max(longestSubArrayLength, i - mp[sum - k]);
        }
        i++;
    }
    return longestSubArrayLength;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << longestSubarray(v, k) << '\n';
}

// 10 52
// 94 -33 -13 40 -82 94 -33 -13 40 -82

// 6 15
// 10 5 2 7 1 -10