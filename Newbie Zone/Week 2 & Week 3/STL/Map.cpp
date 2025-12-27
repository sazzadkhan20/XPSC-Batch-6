#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    // mp.insert({10, 20}); // O(logn)
    // mp.insert({2, 7});
    mp[10] = 20; // O(logn)
    mp[2] = 15;
    mp[10] = 22;
    mp[9] = 34;
    mp[15] = 10;

    // cout << mp[10] << endl; // O(logn)

    // map<int, int>::iterator it;

    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // for (pair<int, int> pa : mp)
    // {
    //     cout << pa.first << " " << pa.second << endl;
    // }

    // cout << mp[24] << endl;

    // Find Operation
    //  auto it = find(v.begin(), v.end(), value); // for vector
    //  auto it = mp.find(20); // O(logn)
    //  if (it == mp.end())
    //  {
    //      cout << "Key Not Found\n";
    //  }
    //  else
    //  {
    //      cout << it->first << " " << it->second << endl; // O(1)
    //  }
    for (auto [key, val] : mp)
    {
        cout << key << " " << val << endl;
    }
    cout << '\n';
    // if (mp[20] == 0)
    // {
    //     cout << "Key Not Found\n";
    // }
    // else
    // {
    //     cout << mp[10] << endl;
    // }

    // Erase Operation
    // auto it = mp.find(20); // O(logn)
    // if (it != mp.end())
    // {
    //     mp.erase(20); // O(logn)
    // }
    // auto it1 = mp.begin(); // O(1);
    // it1++;
    // cout << it1->first << " " << it1->second << endl;
    // mp.clear(); //O(n)

    // auto it = mp.lower_bound(7); // O(logn)
    // if (it == mp.end())
    // {
    //     cout << "END\n";
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << endl
    //          << endl;
    // }

    auto it = mp.upper_bound(9); // O(logn)
    if (it == mp.end())
    {
        cout << "END\n";
    }
    else
    {
        cout << it->first << " " << it->second << endl
             << endl;
    }
    // for (auto [key, val] : mp)
    // {
    //     cout << key << " " << val << endl;
    // }
}