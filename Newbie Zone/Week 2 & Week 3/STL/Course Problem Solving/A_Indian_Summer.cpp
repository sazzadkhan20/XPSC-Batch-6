#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // map<int, int> mp;    // O(logn) -- key Constant(int,float,double as Key type)
    // map<string, int> mp; // O(k*logn) -- key not Constant(k = string Size)
    // map<vector<int>, int> mp // O(m*logn)  key not Constant(m = vector Size)
    map<pair<string, string>, int>
        mp; // O((k+p)*logn) key not Constant(k = string 1 Size and p = string 2 Size)
    while (n--)
    {
        string species, color;
        cin >> species >> color;
        mp[{species, color}] = 1; // O((k+p)*logn)
        // if (mp[{species, color}] == 0)
        // {
        //     leavesNum++;
        //     mp[{species, color}] = 1;
        // }
    }
    cout << mp.size() << endl;
}