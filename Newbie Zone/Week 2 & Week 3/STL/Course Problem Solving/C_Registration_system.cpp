#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string name;
        cin >> name;
        if (mp.find(name) == mp.end())
        {
            mp[name] = 1;
            cout << "OK\n";
        }
        else
        {
            string reName = name + to_string(mp[name]);
            mp[name]++;
            cout << reName << endl;
        }
    }
}