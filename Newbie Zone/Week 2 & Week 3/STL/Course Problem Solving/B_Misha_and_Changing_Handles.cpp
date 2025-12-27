#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> mp;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        auto it = mp.find(s1);
        if (it == mp.end())
        {
            mp[s2] = s1;
        }
        else
        {
            string s = mp[s1];
            mp.erase(s1);
            mp[s2] = s;
        }
    }
    cout << mp.size() << '\n';
    for (auto [key, val] : mp)
    {
        cout << val << " " << key << '\n';
    }
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     map<string, int> mp1;
//     map<string, int> mp2;
//     while (n--)
//     {
//         string s1, s2;
//         cin >> s1 >> s2;
//         auto it = mp2.find(s1);
//         if (it != mp2.end())
//         {
//             mp2.erase(s1);
//             mp2[s2]++;
//             continue;
//         }
//         mp1[s1]++;
//         mp2[s2]++;
//     }
//     cout << mp1.size() << endl;
//     auto it1 = mp1.begin(), it2 = mp2.begin();
//     while (it1 != mp1.end() && it2 != mp2.end())
//     {
//         cout << it1->first << " " << it2->first << endl;
//         it1++;
//         it2++;
//     }
// }