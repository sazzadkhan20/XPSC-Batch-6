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
        int m = (n * (n - 1)) / 2;
        map<int, int> mp;
        int count = n - 1;
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto [key, value] : mp)
        {
            int val = count;
            int counter = val - 1;
            while (value > val)
            {
                v.push_back(key);
                val += counter;
                counter--;
                count--;
            }
            v.push_back(key);
            count--;
        }
        for (int val : v)
        {
            cout << val << ' ';
        }
        if (v.size() + 1 == n)
        {
            cout << 1000000000;
        }
        cout << '\n';
    }
}