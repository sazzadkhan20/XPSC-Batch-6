#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k, numberOfSegments = 0;
    cin >> n >> k;
    vector<ll> v(n);
    multiset<ll> ms;
    int i = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Variable Size Sliding Window
    while (i < n)
    {
        ms.insert(v[i]);
        if (*ms.rbegin() - *ms.begin() <= k)
        {
            numberOfSegments += i - j + 1;
        }
        else
        {
            while (!ms.empty() && *ms.rbegin() - *ms.begin() > k)
            {
                auto it = ms.find(v[j]);
                ms.erase(it);
                j++;
            }
            numberOfSegments += i - j + 1;
        }
        i++;
    }
    cout << numberOfSegments << '\n';
}