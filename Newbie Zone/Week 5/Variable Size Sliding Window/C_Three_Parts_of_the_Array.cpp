#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n);
    int i = 0, j = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll maxSum = 0, sum1 = v[i], sum2 = v[j];
    while (i < j)
    {
        if (sum1 == sum2)
        {
            maxSum = max(maxSum, sum1);
            i++, j--;
            sum1 += v[i], sum2 += v[j];
        }
        else if (sum1 > sum2)
        {
            j--;
            sum2 += v[j];
        }
        else
        {
            i++;
            sum1 += v[i];
        }
    }
    cout << maxSum << '\n';
}