#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n, m;
    // cin >> n >> m;
    // // vector<int> v(n,5);
    // vector<vector<int>> v(n, vector<int>(m, 5));
    // // for (int i = 0; i < n; i++)
    // // {
    // //     for (int j = 0; j < m; j++)
    // //     {
    // //         cin >> v[i][j];
    // //     }
    // // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
}