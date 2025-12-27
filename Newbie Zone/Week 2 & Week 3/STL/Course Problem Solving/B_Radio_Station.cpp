#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    while (n--)
    {
        string name, ip;
        cin >> name >> ip;
        ip += ";";
        mp[ip] = name;
    }
    while (m--)
    {
        string name, ip;
        cin >> name >> ip;
        cout << name << " " << ip << " #" << mp[ip] << endl;
    }
}