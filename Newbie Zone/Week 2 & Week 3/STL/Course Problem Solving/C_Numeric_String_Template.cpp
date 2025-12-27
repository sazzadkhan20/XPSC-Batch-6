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
        int n, m;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> m;
        while (m--)
        {
            string str;
            cin >> str;
            if (str.length() != n)
            {
                cout << "NO\n";
            }
            else
            {
                set<pair<char, int>> s;
                map<int, bool> mp;
                bool flag = true;
                for (int i = 0; i < n; i++)
                {
                    s.insert({str[i], i});
                }
                int initial = v[s.begin()->second];
                char initChar = s.begin()->first;
                mp[initial] = true;
                for (auto [c, i] : s)
                {
                    // cout << c << " - " << i << endl;
                    if (initChar != c)
                    {
                        initial = v[i];
                        if (mp.find(initial) != mp.end())
                        {
                            cout << "NO\n";
                            flag = false;
                            break;
                        }
                        mp[initial] = true;
                        initChar = c;
                    }
                    if (initial != v[i])
                    {
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    cout << "YES\n";
                }
            }
        }
    }
}