#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<int> v(n);
    int i = 0, j = 0, count = 0;
    ll sum = 0;
    ll numberOfSegment = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // Variable Size Sliding Window
    while (i < n)
    {
        sum += v[i];
        count = 0;
        // cout << "age - " << sum << endl;
        if (sum >= k)
        {
            while (sum >= k)
            {
                // cout << sum << endl;
                if (count == 0)
                {
                    numberOfSegment += j;
                }
                numberOfSegment++;
                sum -= v[j];
                j++;
                count++;
            }
        }
        else
        {
            numberOfSegment += j;
        }
        // cout << "pore - " << sum << endl;
        i++;
    }
    cout << numberOfSegment << '\n';
}