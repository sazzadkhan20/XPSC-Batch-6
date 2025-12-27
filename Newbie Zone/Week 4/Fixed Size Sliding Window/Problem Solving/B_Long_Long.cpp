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
        vector<ll> v(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans += abs(v[i]);
        }
        cout << ans << ' ';
        int i = 0, minOperation = 0, negativeCount = 0;
        while (i < n)
        {
            if (v[i] < 0)
            {
                negativeCount++;
            }
            else if (v[i] > 0 && negativeCount != 0)
            {
                minOperation++;
                negativeCount = 0;
            }
            i++;
        }
        if (negativeCount > 0)
        {
            minOperation++;
        }
        cout << minOperation << '\n';
    }
}