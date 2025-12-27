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
        int n, queries;
        cin.ignore();
        cin >> n >> queries;
        map<int, vector<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }
        while (queries--)
        {
            int a, b;
            cin >> a >> b;
            auto it1 = mp.find(a);
            auto it2 = mp.find(b);
            if (it1 != mp.end() && it2 != mp.end())
            {
                if (it1->second.front() < it2->second.back())
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}