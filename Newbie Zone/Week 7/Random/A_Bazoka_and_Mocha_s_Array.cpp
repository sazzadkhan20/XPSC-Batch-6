#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        map<int, set<int>> mp;
        int prevVal, sortedCout = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0)
            {
                prevVal = x;
            }
            else
            {
                if (prevVal > x)
                {
                    // cout << x << endl;
                    sortedCout++;
                }
            }
            mp[sortedCout].insert(x);
            prevVal = x;
        }
        if (sortedCout <= 1)
        {
            if (mp.size() == 1)
            {
                cout << "Yes\n";
            }
            else
            {
                if (*mp[0].begin() >= *(--mp[1].end()))
                {
                    cout << "Yes\n";
                }
                else
                {
                    cout << "No\n";
                }
            }
        }
        else
        {
            cout << "No\n";
        }
    }
}