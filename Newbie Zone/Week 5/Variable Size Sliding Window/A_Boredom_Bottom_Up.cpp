#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const int N = 1e5 + 5;
int freq[N];
ll dp[N];

ll maximum_point(vector<int> v, int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    if (v[n] - 1 != v[n - 1])
    {
        return dp[n] = 1LL * v[n] * freq[v[n]] + maximum_point(v, n - 1);
    }
    ll op1 = 1LL * v[n] * freq[v[n]] + maximum_point(v, n - 2);
    ll op2 = maximum_point(v, n - 1);
    return dp[n] = max(op1, op2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (freq[x] == 0)
        {
            v.push_back(x);
        }
        freq[x]++;
    }
    v.push_back(0);
    v.push_back(0);
    sort(v.begin(), v.end());
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i < v.size(); i++)
    {
        if (v[i] - 1 != v[i - 1])
        {
            dp[i] = 1LL * v[i] * freq[v[i]] + dp[i - 1];
        }
        else
        {
            dp[i] = max(1LL * v[i] * freq[v[i]] + dp[i - 2], dp[i - 1]);
        }
        // cout << dp[i] << endl;
    }
    cout << dp[v.size() - 1] << endl;
}