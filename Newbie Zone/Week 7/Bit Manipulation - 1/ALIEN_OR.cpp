#include <bits/stdc++.h>
#define ll long long int
#define pa pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(k, 0);
        vector<string> temp;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            reverse(s.begin(), s.end());
            vector<int> temp;
            for (int i = 0; i < k; i++)
            {
                if (s[i] == '1')
                {
                    temp.push_back(i);
                }
            }
            if (temp.size() == 1)
            {
                v[temp[0]] = 1;
            }
        }
        for (int i = 0; i < k; i++)
        {
            if (v[i] == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}