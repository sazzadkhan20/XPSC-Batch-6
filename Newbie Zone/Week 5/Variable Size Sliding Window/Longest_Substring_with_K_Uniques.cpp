#include <bits/stdc++.h>

using namespace std;

int longestKSubstr(string &s, int k)
{
    int longestSubstringLength = -1;
    int i = 0, j = 0, n = s.length(), steps = k;
    map<char, int> mp;
    while (i < n)
    {
        mp[s[i]]++;
        if (mp.size() == k)
        {
            longestSubstringLength = max(longestSubstringLength,
                                         i - j + 1);
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[s[j]]--;
                // cout << s[j] << endl;
                if (mp[s[j]] == 0)
                {
                    mp.erase(s[j]);
                }
                j++;
            }
        }
        i++;
    }
    return longestSubstringLength;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k;
    cin >> s >> k;
    cout << longestKSubstr(s, k) << '\n';
}