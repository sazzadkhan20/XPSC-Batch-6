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
        string s = "";
        int i = 0, j = 3 * n - 1;
        vector<pair<int, int>> indexPair;
        for (int i = 1; i <= n; i++)
        {
            s += "BAN";
        }
        while (i < j)
        {
            if (s[i] == 'A' && s[j] == 'N')
            {
                indexPair.push_back({i + 1, j + 1});
                i++, j--;
            }
            else if (s[i] == 'A')
            {
                j--;
            }
            else if (s[j] == 'N')
            {
                i++;
            }
            else
            {
                i++, j--;
            }
        }
        cout << indexPair.size() << '\n';
        for (auto [i, j] : indexPair)
        {
            cout << i << ' ' << j << '\n';
        }
    }
}