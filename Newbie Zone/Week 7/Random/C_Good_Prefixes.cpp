#include <bits/stdc++.h>
#define ll long long int
#define pa pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        ll sum = 0, higestElement = INT_MIN;
        int numGoodPrefixes = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == sum)
            {
                numGoodPrefixes++;
                sum += x;
            }
            else
            {
                sum += x;
                if (higestElement != INT_MIN && sum - higestElement == higestElement)
                {
                    numGoodPrefixes++;
                }
            }
            higestElement = max(higestElement, x);
        }
        cout << numGoodPrefixes << '\n';
    }
}