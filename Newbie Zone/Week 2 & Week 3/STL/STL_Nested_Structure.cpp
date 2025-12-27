#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // vector<set<int>> v;
    // vector<multiset<int>> v;
    // map<vector<int>, int> mp;
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(30);
    // v.push_back(10);
    // mp[v] = 3;

    // for (auto [key, value] : mp)
    // {
    //     for (int data : key)
    //     {
    //         cout << data << " ";
    //     }
    //     cout << "-> " << value << '\n';
    // }

    // map<vector<int>, vector<int>> mp;
    // vector<int> v;
    // mp[v].push_back(10);
    // mp[v].push_back(20);
    // mp[v].push_back(30);

    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(4);
    s1.insert(2);
    s1.insert(10);
    s1.insert(1);

    set<int> s2;
    s2.insert(8);
    s2.insert(6);
    s2.insert(5);

    set<int> s3;
    s3.insert(10);
    s3.insert(15);
    s3.insert(3);
    s3.insert(7);

    mp[3] = s1;
    mp[3].insert(15);
    mp[2] = s2;
    mp[10] = s3;

    for (auto [key, value] : mp)
    {
        cout << key << " -> ";
        for (int data : value)
        {
            cout << data << " ";
        }
        cout << '\n';
    }

    int x, y;
    cin >> x >> y;
    auto lb1 = mp.lower_bound(x);

    if (lb1 != mp.end())
    {
        int ans = lb1->first;
        cout << ans << endl;
        auto lb2 = mp[ans].lower_bound(y);
        if (lb2 != mp[ans].end())
        {
            cout << *lb2 << endl;
        }
        else
        {
            cout << "Value not Found in Set\n";
        }
    }
    else
    {
        cout << "Key not Found in Map\n";
    }
}