#include <bits/stdc++.h>
#define ll long long int

using namespace std;
const int N = 1e6;
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
    memset(freq, 0, sizeof(freq));
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
    sort(v.begin(), v.end());
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    cout << maximum_point(v, v.size() - 1) << '\n';
}

// Wrong Technique

// #include <bits/stdc++.h>
// #define int long long int

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nuintptr);

//     int n;
//     cin >> n;
//     set<int> s;
//     map<int, int> mp;
//     int value1 = 0, value2 = 0, track, finalValue = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         mp[x]++;
//         s.insert(x);
//     }
//     track = *s.begin();
//     value1 += mp[track] * track;
//     bool flag = true;
//     auto tempIt = ++s.begin();
//     while (tempIt != s.end())
//     {
//         int val = *tempIt;
//         if (track + 1 == val)
//         {
//             if (flag)
//                 value2 += mp[val] * val;
//             else
//                 value1 += mp[val] * val;
//             flag = !flag;
//         }
//         else if (track + 1 != val)
//         {
//             finalValue += max(value1, value2);
//             // cout << finalValue << endl;
//             value1 = mp[val] * val;
//             value2 = 0;
//             flag = true;
//         }
//         track = val;
//         tempIt++;
//     }
//     finalValue += max(value1, value2);
//     cout << finalValue << '\n';
// }
