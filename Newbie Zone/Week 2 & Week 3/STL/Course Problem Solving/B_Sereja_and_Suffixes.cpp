#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> nums(n), index(n + 1);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(nums[i]);
        index[i + 1] = s.size();
    }
    while (m--)
    {
        int idx;
        cin >> idx;
        cout << index[idx] << '\n';
    }
}

// using namespace std;
// const int N = 1e5 + 5;
// int freq[N];
// int nums[N];
// int index[N];

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }
//     int uniqueCount = 0;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (freq[nums[i]] == 0)
//         {
//             freq[nums[i]]++;
//             uniqueCount++;
//             index[i + 1] = uniqueCount;
//         }
//         else
//         {
//             index[i + 1] = uniqueCount;
//         }
//     }
//     while (m--)
//     {
//         int idx;
//         cin >> idx;
//         cout << index[idx] << '\n';
//     }
// }