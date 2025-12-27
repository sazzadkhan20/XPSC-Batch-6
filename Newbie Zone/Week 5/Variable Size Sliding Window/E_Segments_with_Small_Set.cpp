#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    int i = 0, j = 0;
    ll numberOfSegment = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // Variable Size Sliding Window
    while (i < n)
    {
        mp[v[i]]++;
        if (mp.size() <= k)
        {
            numberOfSegment += i - j + 1;
            // cout << numberOfSegment << endl;
        }
        else
        {
            while (mp.size() > k)
            {
                mp[v[j]]--;
                if (mp[v[j]] == 0)
                {
                    mp.erase(v[j]);
                }
                j++;
            }
            numberOfSegment += i - j + 1;
            // cout << numberOfSegment << endl;
        }
        i++;
    }
    cout << numberOfSegment << '\n';
}