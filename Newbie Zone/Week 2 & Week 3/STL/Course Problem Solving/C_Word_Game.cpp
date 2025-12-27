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
        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                mp[word].push_back(i);
            }
        }
        int ans[4];
        memset(ans, 0, sizeof(ans));
        for (auto [key, val] : mp)
        {
            vector<int> v = val;
            if (v.size() == 1)
            {
                ans[v[0]] += 3;
            }
            else if (v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }
        for (int i = 1; i < 4; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int testCase;
//     cin >> testCase;
//     while (testCase--)
//     {
//         int n;
//         cin >> n;
//         int k;
//         map<string, int> mp;
//         vector<vector<string>> v(3);
//         for (int i = 0; i < 3; i++)
//         {
//             k = n;
//             while (k--)
//             {
//                 string s;
//                 cin >> s;
//                 mp[s]++;
//                 v[i].push_back(s);
//             }
//         }
//         for (int i = 0; i < 3; i++)
//         {
//             int points = 0;
//             for (string s : v[i])
//             {
//                 if (mp[s] == 2)
//                     points += 1;
//                 else if (mp[s] == 1)
//                     points += 3;
//             }
//             cout << points << " ";
//         }
//         cout << '\n';
//     }
// }