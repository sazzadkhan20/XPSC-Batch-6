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
        int n;
        string s;
        cin >> n >> s;
        map<char, int> mp;
        int maxNumberOfCorrectAnswers = 0;
        for (int i = 0; i < 4 * n; i++)
        {
            mp[s[i]]++;
        }
        for (auto [key, value] : mp)
        {
            if (key != '?')
            {
                if (value > n)
                    maxNumberOfCorrectAnswers += n;
                else
                    maxNumberOfCorrectAnswers += value;
            }
        }
        cout << maxNumberOfCorrectAnswers << '\n';
    }
}