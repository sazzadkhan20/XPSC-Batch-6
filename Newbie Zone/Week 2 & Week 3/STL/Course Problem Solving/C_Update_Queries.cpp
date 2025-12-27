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
        string str, ctr;
        cin >> n >> m >> str;
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        cin >> ctr;
        sort(ctr.begin(), ctr.end());
        int i = 0;
        for (auto x : s)
        {
            str[x - 1] = ctr[i];
            i++;
        }
        cout << str << '\n';
    }
}