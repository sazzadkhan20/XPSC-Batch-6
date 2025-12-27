#include <bits/stdc++.h>
#define ll long long int

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
        multiset<ll> ms;
        ll count = 1;
        ll minOperation = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ms.insert(x);
        }
        for (auto val : ms)
        {
            if (val == count)
            {
                count++;
            }
            else if (val == count - 1)
            {
                continue;
            }
            else if (val != count)
            {
                // cout << val << " " << count << '\n';
                minOperation += val - count;
                count++;
            }
        }
        cout << minOperation << '\n';
    }
}