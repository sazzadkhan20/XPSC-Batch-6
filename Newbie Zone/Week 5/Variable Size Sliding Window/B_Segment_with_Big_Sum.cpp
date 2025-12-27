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
    int i = 0, j = 0;
    ll sum = 0;
    int LowestSegment = INT_MAX;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // Variable Size Sliding Window
    while (i < n)
    {
        sum += v[i];
        while (sum >= k)
        {
            LowestSegment = min(LowestSegment, i - j + 1);
            sum -= v[j];
            j++;
        }
        i++;
    }
    if (LowestSegment == INT_MAX)
        cout << -1 << '\n';
    else
        cout << LowestSegment << '\n';
}