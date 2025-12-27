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
        cin >> n;
        set<int> s;
        map<int, int> mp;
        int minSet = 0;
        int updatedValue;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
            mp[x]++;
        }
        auto it = s.begin();
        updatedValue = *it;
        minSet += mp[*it];
        it++;
        while (it != s.end())
        {
            if (*it - updatedValue == 1)
            {
                if (mp[*it] > mp[updatedValue])
                {
                    minSet += mp[*it] - mp[updatedValue];
                }
            }
            else
            {
                minSet += mp[*it];
            }
            updatedValue = *it;
            it++;
        }
        cout << minSet << '\n';
    }
}